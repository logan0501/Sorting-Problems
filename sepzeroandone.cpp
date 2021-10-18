#include<bits/stdc++.h>
using namespace std;
void  binSort(int arr[], int N){
	int i=-1;
	for(int j=0;j<N;j++){
		if(arr[j]==0){i++;swap(arr[i],arr[j]);}
	}

}

int main(){
	 int arr[] = {0, 1, 0, 1, 1, 1};
	 binSort(arr,6);
	 for(int i:arr)cout<<i<<endl;
	return 0;
}