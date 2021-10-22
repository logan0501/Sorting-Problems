#include<bits/stdc++.h>
using namespace std;
void cycleSort(int arr[],int n){
	int i=0;
	while(i<n){
		int correct=arr[i]-1;
		if(arr[i]!=arr[correct]){
			swap(arr[i],arr[correct]);
		}else i++;
	}
}
int main(){
	int arr[]={1,4,3,2};
	cycleSort(arr,4);
	for(int a:arr)cout<<a<<endl;
	return 0;
}