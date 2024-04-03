/*
Q1. Calculate the product of all the elements in the given array.
*/

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int prod=1;
    for(int i=0;i<size;i++){
        prod*=arr[i];
    }
    cout<<"Product of array element is : "<<prod;
}