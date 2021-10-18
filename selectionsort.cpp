#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min_indx=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_indx])min_indx=j;
		}
		swap(arr[i],arr[min_indx]);
	}
}
int main(){
	int arr[]= {4, 1, 3, 9, 7};
	selectionSort(arr,5);
	for(int a:arr)cout<<a<<endl;
	
	return 0;
}