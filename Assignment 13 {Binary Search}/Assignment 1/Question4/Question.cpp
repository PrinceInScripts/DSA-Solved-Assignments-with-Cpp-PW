/*
Q4. Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.

Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2
*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;

        int count=0;

        for(int num:arr){
            if(num<=mid){
                count++;
            }
        }

        if(count>mid) hi=mid;
        else lo=mid+1;
    }

    cout<<arr[lo]<<endl;
    

}