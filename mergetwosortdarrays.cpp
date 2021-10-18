#include<bits/stdc++.h>
using namespace std;

void mergearrays(int arr1[],int arr2[],int m,int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(arr1[i]<=arr2[j]){
			cout<<arr1[i]<<" "<<endl;
			i++;
		}else{

		cout<<arr2[i]<<" "<<endl;
		j++;
		}
	}
	while(i<m){
		cout<<arr1[i]<<" "<<endl;
		i++;
	}
	while(j<n){
		cout<<arr2[j]<<" "<<endl;
		j++;
	}
}
int main(){
	int arr1[] = {0 ,1, 2, 3},arr2[] = {5, 6 ,7, 8, 9};
	mergearrays(arr1,arr2,4,5);
	return 0;
}