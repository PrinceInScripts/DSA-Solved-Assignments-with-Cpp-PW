/*
Q6. WAP to print the sum of a given number and its reverse.
*/

#include<iostream>
using namespace std;
int main(){
        int num;
        cout<<"Enter a number : ";
        cin>>num;
        
        int l_digit,rev=0;
        int a=num,sum;

        while(num>0){
            l_digit=num%10;
            rev*=10;
            rev+=l_digit;
            num/=10;
        }

        sum=a+rev;

        cout<<"sum of a given number and its reverse : "<<sum;
}