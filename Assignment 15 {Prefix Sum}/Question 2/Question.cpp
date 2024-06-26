


/*
Q2. Given an array of integers nums , calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is
equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements
to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1 . [Leetcode 724]
 
 
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
   
     int pivotIndex(vector<int>& nums) {
       int n=nums.size();

       for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
       }

       for(int i=0;i<n;i++){
           int left_sum=0;
           int right_sum=0;

           if(i!=0) left_sum=nums[i-1];
           right_sum=nums[n-1]-nums[i];

           if(left_sum==right_sum) return i;
       }

       return -1;
    }
    
   
};


int main(){
   vector<int> nums={2,1,-1};
 
    Solution solution; 
   int ans=solution.pivotIndex(nums);

    
    cout<<ans;

    return 0;
}
