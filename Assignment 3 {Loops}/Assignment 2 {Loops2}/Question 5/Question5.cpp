/*
Q5. WAP to print the sum of all the even digits of a given number.
*/

#include<iostream>
using namespace std;
int main(){
        int num;
        cout<<"Enter a number : ";
        cin>>num;
        
        int l_digit,sum=0;

        while(num>0){
            l_digit=num%10;
            if(l_digit % 2 == 0){
                sum+=l_digit;
            }
            num/=10;
        }

        cout<<"sum of all the even digits of a given number is : "<<sum;
}