/*
Q5. Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.

Input 1: n = 36
Output 1: yes
Input 2: n = 45
Output 2: no
*/

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool isPerfectSquare(int n){
    int root=sqrt(n);
    if(root*root==n) return true;
    else return false;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    isPerfectSquare(n) ? cout<<"Yes":cout<<"No";
}
