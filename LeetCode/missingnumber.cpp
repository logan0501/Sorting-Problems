#include<bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>& nums) {
 	int i=0;
 	while(i<nums.size()){
 		if(nums[i]!=i && nums[i]<nums.size()){
 			swap(nums[i],nums[nums[i]]);
 		}else i++;
 	}
 	for(int i=0;i<nums.size();i++){
 		if(nums[i]!=i)return i;
 	}
 	return nums.size();
 }
  int missingNumber1(vector<int>& nums) {
       int val=nums.size();
        for(int i=0;i<nums.size();i++){
            val^=i;
            val^=nums[i];
        }
        return val;
    }
int main(){
	vector<int> v={9,6,4,2,3,5,7,0,1};
	cout<<missingNumber(v);
	return 0;
}