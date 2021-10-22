#include<bits/stdc++.h>
using namespace std;
int  minimum_difference(int arr[], int n)
{
	sort(arr,arr+n);
	int minv=INT_MAX;
	for(int i=0;i<n-1;i++){
		minv=min(minv,arr[i+1]-arr[i]);
	}
	return minv;
}
int main(){
	int arr[]={10,8,1,4};
	cout<<minimum_difference(arr,4);
	return 0;
}