#include<bits/stdc++.h>
using namespace std;
struct Interval{
	int start,end;
};
bool comp(Interval i1,Interval i2){
	return i1.start>i2.end;
}
void mergeIntervals(Interval arr[],int n){
	int res=0;
	sort(arr,arr+n,comp);
	for(int i=1;i<n;i++){
		if(arr[res].end>=arr[i].start){
			arr[res].start=min(arr[res].start,arr[i].start);
			arr[res].end=max(arr[res].end,arr[i].end);
		}else{
			res++;
			arr[res]=arr[i];
		}
	}
	for(int i=0;i<=res;i++){
		cout<<arr[i].start<<" "<<arr[i].end<<endl;
	}
}
int main(){
	Interval arr[]={ {6,8}, {1,9}, {2,4}, {4,7} };
	mergeIntervals(arr,4);
	return 0;
}