#include<bits/stdc++.h>
using namespace std;
int countInversions(int arr[],int n){
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i])count++;
		}
	}
	return count;
}
int main(){
	int arr[]={40,30,20,10};
	cout<<countInversions(arr,5);
	return 0;
}