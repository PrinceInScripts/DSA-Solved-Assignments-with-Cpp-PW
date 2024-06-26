

/*
conver[i] = arr[i] + max(arr[0..i]) where max(arr[0..i]) is the maximum value of

rr[j] over 0 <= j <= i .
We also

define the score of an array arr as the sum of the values of the conversion array
of arr .
Given a 0-indexed

integer array nums of length n , return an array ans of length n where

ans[i] is the score of the prefix

nums[0..i] . [Leetcode 2640]
 
*/


#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution {
public:   
   
     vector<long long> findPrefixScore(vector<int>& nums) {
       int n=nums.size();
       vector<long long> score(n);
       int mx=INT_MIN;

       for(int i=0;i<n;i++){
          mx=max(mx,nums[i]);
          score[i]=nums[i]+mx;
       }

       for(int i=1;i<n;i++){
         score[i]+=score[i-1];
       }

       return score;
    }
    
   
};


int main(){
   vector<int> nums={2,3,7,5,10};
 
    Solution solution; 
   vector<long long> ans=solution.findPrefixScore(nums);

    
    for(auto el:ans){
        cout<<el<<" ";
    }

    return 0;
}
