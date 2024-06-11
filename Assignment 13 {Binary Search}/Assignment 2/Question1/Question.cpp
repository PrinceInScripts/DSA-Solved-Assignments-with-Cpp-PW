/*
Q1. Write a program to apply binary search in array sorted in decreasing order.
*/

#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> nums,int target){
    int n=nums.size();
    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) hi=mid-1;
        else lo=mid+1;
    }
}
int main(){
    vector<int> nums={5,4,3,2,1};
    int target=2;

     cout<<search(nums,target);


}