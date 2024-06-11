/*
Q2. You have a sorted array of infinite numbers, how would you search an element in the array?*/

#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums,int target,int lo,int hi){
    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) lo=mid+1;
        else hi=mid-1;
    }
}
int findIndex(vector<int>& nums,int target){
    int lo=0;
    int hi=1;
    while(target>nums[hi]){
        lo=hi;
        hi=2*hi;
    }

    search(nums,target,lo,hi);
}
int main(){
    vector<int> nums={3,5,7,9,10,90,100,130,140,160,170};
    
    int target=130;

     cout<<findIndex(nums,target);


}