#include<bits/stdc++.h>
using namespace std;
void hoarespartition(int arr[],int n){
	int i=-1,l=n,pivot=arr[0];

	while(1){
		do{
			i++;
		}while(arr[i]<pivot)
		do{
			j--;
		}while(arr[j]>pivot)
		if(i>=j)break;
		swap(arr[i],arr[j]);
	}
}
int main(){
	int arr[]={5,3,8,4,2,7,1,10};
	hoarespartition(arr,8);
	return 0;
}