#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> arr, long long n, long long m){
	if(m>n)return -1;
	sort(arr.begin(),arr.end());
	long long res=arr[m-1]-arr[0];
	for(long long i=1;i+m-1<n;i++){
		res=min(res,arr[i+m-1]-arr[i]);
	}
	return res;
    
}  
int main(){
	vector<long long> A = {7, 3, 2, 4, 9, 12, 56};
	cout<<findMinDiff(A,A.size(),3);
	return 0;
}