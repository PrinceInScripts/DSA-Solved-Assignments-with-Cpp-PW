/*
Q2. Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2
*/

#include<iostream>
using namespace std;
int main(){
    int a[]={0,0,1,1,1,1};

    int n=sizeof(a)/sizeof(a[0]);
    int lo=0;
    int hi=n-1;
    int count=0;
    int x=-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(a[mid]==1){
            x=mid;
            hi=mid-1;
        } else {
            lo=mid+1;
        }
    }
    // while(lo<=hi){
    //     int mid=lo+(hi-lo)/2;

    //     if(a[mid]==1){
    //         count++;
    //         lo=mid+1;
    //     } else {
    //         lo=mid+1;
    //     }
    // }
    if(x==-1) cout<<0;
    else cout<<n-x;

}