/*
Q5. Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.

Input 1: n = 36
Output 1: yes
Input 2: n = 45
Output 2: no
*/

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool isPerfectSquare(int n){
    int lo=1;
    int hi=n;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid==n) return true;
        if(mid*mid>n) hi=mid-1;
        else lo=mid+1;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    isPerfectSquare(n) ? cout<<"Yes":cout<<"No";
}
