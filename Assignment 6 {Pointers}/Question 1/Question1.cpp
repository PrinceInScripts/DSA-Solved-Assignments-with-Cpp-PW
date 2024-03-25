/*
Q1. Write a program to find the product of two numbers using pointers.
*/

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number : ";
    cin>>x;
    int y;
    cout<<"Enter second number : ";
    cin>>y;

    int* ptr1=&x;
    int* ptr2=&y;

    int ans;
    int* ptrans=&ans;
    *ptrans=*ptr1 * *ptr2;
    cout<<"Product of two numbers : "<<ans;

}