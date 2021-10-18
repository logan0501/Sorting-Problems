#include<bits/stdc++.h>
using namespace std;
void intersectionOfTwoSortedArrays(int arr1[],int arr2[],int m,int n){
	//O(n*m)
	for(int i=0;i<m;i++){
		if(i>0 && arr1[i]==arr1[i-1])continue;
		for(int j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<endl;
				break;
			}
		}
	}
}
void intersectionOfTwoSortedArraysEfficient(int arr1[],int arr2[],int m,int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(i>0 && arr1[i]==arr1[i-1]){i++;continue;}
		if(arr1[i]<arr2[j])i++;
		else if(arr1[i]>arr2[j])j++;
		else {
			cout<<arr1[i]<<endl;
			i++;
			j++;
		}
	}
}
int main(){
	int arr1[]={1,20,20,40,60},arr2[]={2,20,20,20};
	intersectionOfTwoSortedArraysEfficient(arr1,arr2,5,4);
	return 0;
}