#include<bits/stdc++.h>
using namespace std;
void lomutoPartition(int arr[],int n){
	int pivot =arr[n-1];
	int i=-1;
	for(int j=0;j<n-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[n-1]);

}
int main(){
	int arr[]={10,80,30,90,40,50,70};
	lomutoPartition(arr,7);
	for(int a:arr)cout<<a<<endl;
	return 0;
}