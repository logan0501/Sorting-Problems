#include<bits/stdc++.h>
using namespace std;
void unionOfArrays(int arr1[],int arr2[],int m,int n){
	//Time - O((m+n)log(m+n)
	//Space - O(m+n)
	int c[m+n];
	for(int i=0;i<m;i++){
		c[i]=arr1[i];
	}
	for(int i=0;i<n;i++){
		c[m+i]=arr2[i];
	}
	sort(c,c+m+n);
	for(int i=0;i<m+n;i++){
		if(i==0 || c[i]!=c[i-1]){
			cout<<c[i]<<endl;
		}
	}
}
void unionOfArraysEfficient(int a[],int b[],int m,int n){
	//should debug
	int i=0,j=0;
	while(i<m && j<n){
		
		if (i>0 && a[i]==a[i-1]){i++;continue;}
		
		if(j>0 && b[j]==b[j-1]){j++;continue;}
		
		if(a[i]<b[j]){cout<<a[i]<<endl;i++;}
		
		else if(a[i]>b[j]){cout<<b[j]<<endl;j++;}
		else {cout<<a[i]<<endl;i++;j++;}

	}
	
	while(i<m){
		if(i>0 && a[i]!=a[i-1]){cout<<a[i]<<endl;i++;}
	}

	while(j<n){
		if(j>0 && b[j]!=b[j-1]){cout<<b[j]<<endl;j++;}
	}

}
int main(){
	int arr1[]={2,3,3,3,4,4};
	int arr2[]={4,4};
	unionOfArraysEfficient(arr1,arr2,6,2);
	return 0;
}