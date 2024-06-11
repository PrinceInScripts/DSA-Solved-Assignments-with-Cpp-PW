/*
Q3. You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
 The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/

#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>& nums,int target){
    vector<int> temp;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++){
            temp.push_back(nums[i][j]);
        }
    }
    int lo=0;
    int hi=temp.size()-1;
    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(temp[mid]==target) return true;
        else if(target>temp[mid]) lo=mid+1;
        else hi=mid-1;
    }
    return false;
}

int main(){
    vector<vector<int>> nums={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    
    int target=13;

    search(nums,target)?cout<<"true":cout<<"false";


}