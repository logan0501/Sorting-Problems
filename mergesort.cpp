#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++){
		left[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		right[i]=arr[n1+i];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
			
		}else{
			arr[k]=right[j];
			
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=left[i];
		i++;
		k++;
	}

	while(j<n2){
		arr[k]=right[j];
		j++;
		k++;
	}

}
void mergeSort(int arr[],int l,int r){
	if(r>l){
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main(){
	int arr[]={10,15,20,11,30};
	mergeSort(arr,0,4);
	for(int a:arr)cout<<a<<endl;
	return 0;
}