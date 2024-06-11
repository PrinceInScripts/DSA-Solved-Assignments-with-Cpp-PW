/*
Q4. Sort the array in descending order using Bubble Sort.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void bubbleSort(vector<int>& nums){
      int n=nums.size();
      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(nums[j]<nums[j+1]){
               swap(nums[j],nums[j+1]);
            }
        }
      }
}
int main(){
    vector<int> nums={2,4,1,5,3};

    bubbleSort(nums);
    for(int el:nums){
        cout<<el<<" ";
    }
}