#include<bits/stdc++.h>
using namespace std;
//Separate odd and even numbers
void segregateEvenOdd(int arr[], int n) {
	//Lomuto partition
	int i=-1;
	for(int j=0;j<n-1;j++){
		if(arr[j]%2==0){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	
}
void segregateEvenOddH(int arr[],int n){
	//Hoare's partition
	int i=-1,j=n-1;
	while(1){
		do{
			i++;
		}while(arr[i]%2==0);
		do{
			j--;
		}while(arr[j]%2);
		if(i>=j)break;
		swap(arr[i],arr[j]);
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	// segregateEvenOdd(arr,7);
	segregateEvenOddH(arr,7);
	for(int a:arr)cout<<a<<endl;
	return 0;
}