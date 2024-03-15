/*
Q9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/

#include<iostream>
using namespace std;
int main(){
    int l_digit,arm_num,d_num,num;
    for(int i=1;i<=500;i++){
        d_num=i;
        num=d_num;
        arm_num=0;
        while(d_num>0){
            l_digit=d_num%10;
            arm_num+=l_digit*l_digit*l_digit;
            d_num/=10;
        }
        
        if(num == arm_num){
            cout<<num<<" ";
        }
    }
}