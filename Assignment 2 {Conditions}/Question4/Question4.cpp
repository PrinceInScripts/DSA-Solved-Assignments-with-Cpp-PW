/*
Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
*/

#include<iostream>
using namespace std;

int main(){
    int r,h;
    float pi=3.14,vol;
    cout<<"Enter radius of cylinder : ";
    cin>>r;
    cout<<"Enter height of cylinder : ";
    cin>>h;
    
    vol=pi*r*r*h;

    cout<<"volume of the cylinder is : "<<vol;
}