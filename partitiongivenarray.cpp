#include<bits/stdc++.h>
using namespace std;
void naivePartition(int arr[],int l,int r,int p){
	int temp[r-l+1]={0},idx=0;
	for(int i=l;i<=r;i++){
		if(arr[i]<=arr[p])temp[idx++]=arr[i];
	}
	for(int i=l;i<=r;i++){
		if(arr[i]>arr[p])temp[idx++]=arr[i];
	}
	for(int i=l;i<=r;i++){
		arr[i]=temp[i];
	}
	//Time - O(n)
	//Space - O(n)

}
int main(){
	int arr[]={3,8,6,12,10,7};
	naivePartition(arr,0,5,5);
	for(int a:arr)cout<<a<<endl;
	return 0;
}