/*
Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while
loop.
*/

#include<iostream>
using namespace std;
int main(){
    int a=65;

    while(a<=90){
        cout<<a<<" --> "<<(char)a<<endl;
        a++;
    }
}