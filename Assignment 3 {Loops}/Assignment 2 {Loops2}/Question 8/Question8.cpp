/*
Q8. Print first ‘n’ fibonacci numbers.
*/

#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"Enter a number : ";
    cin>>num;

    int a=1,b=1,sum;
    if(num==1) cout<<a<<" ";
    else if(num != 0 )  cout<<a<<" "<<b<<" ";
   
    for(int i=1;i<=num-2;i++){
         sum=a+b;
         a=b;
         b=sum;
         cout<<sum<<" ";
    }
}