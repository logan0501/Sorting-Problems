#include<bits/stdc++.h>
using namespace std;
//Rearrange positive and negative numbers
void rearrange(int arr[], int n) {
	    // Hoares algorithm
	int i=-1,j=n;
	while(1){
		do{
			i++;
		}while(arr[i]<0);
		do{
			j--;
		}while(arr[j]>0);
		if(i>=j)break;
		swap(arr[i],arr[j]);
	}
}
int main(){
	int Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
	rearrange(Arr,9);
	for(int a:Arr)cout<<a<<endl;
	return 0;
}