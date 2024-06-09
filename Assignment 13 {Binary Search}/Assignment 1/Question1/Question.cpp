/*
Q1. Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.

Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
Output 1: 6
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[]={1,2,3,3,4,4,4,5};
  int x=4;
  int n=sizeof(arr)/sizeof(arr[0]);
  bool flag=false;

  int lo=0;
  int hi=n-1;

  while(lo<=hi){
    int mid=lo+(hi-lo)/2;

    if(arr[mid]==x){
       if(arr[mid]==arr[mid+1] ){
        lo=mid+1;
       } else {
        cout<<mid<<endl;
        flag=true;
        break;
       }
    } else if(arr[mid]>x){
        hi=mid-1;
    } else {
        lo=mid+1;
    }
  }
  if(!flag)
  cout<<-1<<endl;
}