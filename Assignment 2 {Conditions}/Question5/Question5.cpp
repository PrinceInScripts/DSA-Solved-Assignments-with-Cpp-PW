/*
Q5. WAP to find the difference between ASCII of two characters ,take them as input .
*/

#include<iostream>
using namespace std;

int main(){
    char ch1,ch2;
    cout<<"Enter any two character : ";
    cin>>ch1>>ch2;
    int diff;
    if((int)ch1 >= (int)ch2){
       diff=(int)ch1-(int)ch2;
    } else {
        diff=(int)ch2-(int)ch1;
    }

    cout<<"difference between ASCII of two characters is : "<<diff;
}