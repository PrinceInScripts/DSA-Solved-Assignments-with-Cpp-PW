/*
Q1. Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
recursion.
*/

#include<iostream>
using namespace std;
int odd_Sum(int a,int b){
    if(a>b) return 0;
    
    if(a%2 != 0) return a+odd_Sum(a+1,b);
    else odd_Sum(a+1,b);
}
int main(){
    int a,b;
    cout<<"Enter two Numbers : ";
    cin>>a>>b;
    cout<<odd_Sum(a,b);
}