// Q5. Write a program to find the circumference of a circle with radius 10 in C++.

/*
Ans : In program we have to find out circumference of circle with radius of 10 it means first we make a r variable with value of 10 and then make another variable of result with 2 * pi * r because these is the formula of find out circumference of circle and then we print out result;
*/

#include<iostream>
using namespace std;
int main(){
    int r=10;
    float pi=3.14159;
    float result =2 * pi * r;

    cout<<"circumference of a circle with radius 10 is : "<<result; 
}
    