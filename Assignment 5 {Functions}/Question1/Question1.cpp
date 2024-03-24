/*
Q1. Write a function to print squares of first n natural numbers, taking n as argument to the function.
*/

#include<iostream>
using namespace std;

int sq(int x){
    return x*x;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"squares of first n natural numbers is : "<<endl;
    for(int i=1;i<=n;i++){
         cout<<sq(i)<<endl;
    }
}

/*
#output
Enter a number : 10
squares of first n natural numbers is :   
1
4
9
16
25
36
49
64
81
100
*/