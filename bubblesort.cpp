#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
	for(int i=0;i<n;i++){
		bool swapped = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(!swapped)break;
	}
}
int main(){
	int arr[]= {4, 1, 3, 9, 7};
	bubbleSort(arr,5);
	for(int a:arr)cout<<a<<endl;
	return 0;
}