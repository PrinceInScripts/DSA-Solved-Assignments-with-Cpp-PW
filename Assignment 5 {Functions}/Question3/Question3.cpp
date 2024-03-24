/*
Given two numbers a and b, write a function to print all odd numbers between them.
*/

#include<iostream>
using namespace std;
void p_odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2 != 0 ) cout<<i<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter Second number : ";
    cin>>b;
    cout<<"Odd number between first and second number : "<<endl;
    p_odd(a,b);
}

/*
#output
Enter first number : 4
Enter Second number : 16
Odd number between first and second number :     
5
7
9
11
13
15
*/