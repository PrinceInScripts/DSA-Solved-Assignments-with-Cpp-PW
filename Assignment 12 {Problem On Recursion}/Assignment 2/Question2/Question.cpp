/*
Q2. Given an integer array which may contain duplicate numbers, return power set, containing all the
subsets

of the set. [Leetcode 90]
*/

#include<iostream>
#include<vector>
using namespace std;
void subsetsWithDup(int arr[],vector<int> ans,int n,int idx,bool flag){
           if(idx==n){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            return;
           }

           if(arr[idx]==arr[idx+1]){
            subsetsWithDup(arr,ans,n,idx+1,false);
           if(flag){
              ans.push_back(arr[idx]);
              subsetsWithDup(arr,ans,n,idx+1,true);
           }
           } else {
            subsetsWithDup(arr,ans,n,idx+1,true);
           if(flag){
              ans.push_back(arr[idx]);
              subsetsWithDup(arr,ans,n,idx+1,true);
           }
           }
          
}
int main(){
    int arr[]={1,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    subsetsWithDup(arr,ans,n,0,true);

}