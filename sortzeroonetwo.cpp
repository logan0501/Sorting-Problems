#include<bits/stdc++.h>
using namespace std;
// Dutch National flag algorithm
// I/p : [0,1,1,2,0,1];
// O/p : [0,0,1,1,1,2];

void sort012(int arr[], int n)
{	
    int low=0,mid=0,high=n-1;
    while(mid<=high){
    	if(arr[mid]==0)
    		swap(arr[low++],arr[mid++]);
    	else if (arr[mid]==1)
    		mid++;
    	else{
    		swap(arr[mid],arr[high]);
    		high--;
    	}

    	
    }
}
int main(){
	int arr[]={0,1,1,2,0,1};
	sort012(arr,6);
	for(int a:arr)cout<<a<<endl;	
	return 0;
}