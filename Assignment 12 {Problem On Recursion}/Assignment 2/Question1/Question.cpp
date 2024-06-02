/*
Q1. Given an integer array containing unique numbers, return power set, containing all the subsets of
the set.

[Leetcode 78]
*/

#include<iostream>
#include<vector>
using namespace std;
void subsets(int arr[],vector<int> ans,int n,int idx){
           if(idx==n){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            return;
           }
           
           subsets(arr,ans,n,idx+1);
           ans.push_back(arr[idx]);
           subsets(arr,ans,n,idx+1);
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    subsets(arr,ans,n,0);

}