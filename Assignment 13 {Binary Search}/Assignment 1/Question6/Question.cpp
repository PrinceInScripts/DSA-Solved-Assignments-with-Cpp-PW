/*
Q6. You have n coins and you want to build a staircase with these coins. The staircase consists of k
rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.

Example 1:
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
Example 2:
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.

*/

#include<iostream>
#include<vector>
using namespace std;

int staircase(int n){
    long lo=0;
    long hi=n;

    while(lo<=hi){
        long mid=lo+(hi-lo)/2;
        long coinUsed=mid*(mid+1)/2;

        if(coinUsed==n){
            return (int)mid;
        } else if(n<coinUsed) hi=mid-1;
        else lo=mid+1;
    }
    return (int)hi;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;


    cout<<staircase(n);
    

    


}