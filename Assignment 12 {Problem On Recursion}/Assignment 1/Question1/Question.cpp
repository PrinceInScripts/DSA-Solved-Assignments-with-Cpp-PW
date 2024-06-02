/*
Q1. Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.
*/

#include<iostream>
using namespace std;
int reverseNum(int num,int ans){
    if(num==0) return ans;
      int rem=num%10;
      ans=ans*10+rem;
      reverseNum(num/10,ans);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<reverseNum(num,0);
}