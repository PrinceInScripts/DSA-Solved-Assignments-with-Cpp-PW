/*
Q5. Check if the given array is almost sorted. (elements are at-most one position away).
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
bool checkSort(vector<int>& nums){
      int n=nums.size();
      bool flag=false;
      for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]) {
            swap(nums[i],nums[i+1]);
        }
            
      }
      for(int i=0;i<n-1;i++){
        if(nums[i]<nums[i+1]) {
            flag=true;
           
        }
            
      }
      return flag;
}
int main(){
    vector<int> nums={1,3,2,4,5};

    checkSort(nums)?cout<<"YES":cout<<"NO";
}