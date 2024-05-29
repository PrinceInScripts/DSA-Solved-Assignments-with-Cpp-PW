/*
Q3. Given a positive integer, return true if it is a power of 2.
*/

#include<iostream>
using namespace std;
bool check_of_power(int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    check_of_power(n/2);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(check_of_power(n)) cout<<"True";
    else cout<<"False";
}