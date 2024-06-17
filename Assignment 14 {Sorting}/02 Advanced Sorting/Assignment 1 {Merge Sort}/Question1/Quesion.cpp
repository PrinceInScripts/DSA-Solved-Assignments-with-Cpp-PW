/*
Q1. Given an array of integers, sort it in descending order using merge sort algorithm.
*/

#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i=a.size()-1,j=b.size()-1,k=v.size()-1;
    while(i>=0 && j>=0){
          if(a[i]<b[j]) v[k--]=a[i--];
          else v[k--]=b[j--];
    }

    if(i==-1)
         while(j>=0) v[k--]=b[j--];
    
    if(j==-1)
             while(i>=0) v[k--]=a[i--];
          
}



void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int el:v){
        cout<<el<<" ";
    }
    
    mergeSort(v);
    cout<<endl;
    for(int el:v){
        cout<<el<<" ";
    }
}