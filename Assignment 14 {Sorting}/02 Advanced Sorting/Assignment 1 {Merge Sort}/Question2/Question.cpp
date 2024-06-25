/*
Q2. Reverse Pairs (Leetcode Problem) : Given an integer array nums, return the number of reverse
pairs in the array.

Note:- Please try to invest time doing the assignments which are necessary to build a strong

foundation. Do not

directly Copy Paste using Google or ChatGPT. Please use your brain.
A reverse pair is a pair (i, j) where:
0 <= i < j < nums.length and
nums[i] > 2 * nums[j].
*/

#include<iostream>
#include<vector>
using namespace std;
// int count=0;
void merge(vector<int>& a, vector<int>& b, vector<int>& result){
    int i=0,j=0,k=0;
   
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) result[k++]=a[i++];
        else result[k++]=b[j++]; 
    }

    if(i==a.size())
        while(j<b.size()) result[k++]=b[j++];

    if(j==b.size())
        while(i<a.size()) result[k++]=a[i++];
}
int countPair(vector<int> a,vector<int> b){
    int i=0,j=0;
    int count=0;

    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]*2){
            count+=(a.size()-i);
            j++;
        } else{
            i++;
        }
    }
    return count;
}
int reversePair(vector<int>& v){
    int n=v.size();
    int count=0;
    int n1=n/2,n2=n-n/2;
    if(n==1) return 0;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    count+=reversePair(a);
    count+=reversePair(b);
    
    count+=countPair(a,b);
    merge(a,b,v);
    return count;
}
int main(){
    int arr[]={2,4,3,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    for(int el:v){
        cout<<el<<" ";
    }
    cout<<endl;
    
    cout<<reversePair(v)<<endl;

}