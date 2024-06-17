/*
Q3. Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.
*/

#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
          if(a[i]<b[j]) v[k++]=a[i++];
          else v[k++]=b[j++];
    }

    if(i==a.size())
         while(j<b.size()) v[k++]=b[j++];
    
    if(j==b.size())
             while(i<a.size()) v[k++]=a[i++];
          
}
int main(){
    vector<int> arr={3,4,7,10,15,20};
    vector<int> arr1={10,20,30};
    vector<int> result(arr.size()+arr1.size());
    
    merge(arr,arr1,result);
    for(int el:result){
        cout<<el<<" ";
    }
}