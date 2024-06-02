/*
Q4. Program to find the factorial of a given number.
*/

#include<iostream>
using namespace std;
int factorial(int n,int fact){
    if(n==fact){
        return 1;
    }
    return n*factorial(n-1,fact);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
 
    cout<<"Factorial is : "<<factorial(n,1);
}