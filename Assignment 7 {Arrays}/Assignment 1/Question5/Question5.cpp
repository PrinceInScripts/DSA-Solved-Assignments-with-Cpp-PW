/*
Q5. WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,5,6};

    int x=1;
    int result;

    for(int i=0;i<5;i++){
        if(x==arr[i]){
            x++;
        } else if(arr[i]>x){
             break;
        }
    }

    cout<<"Missing positive element in the sorted Array is : "<<x;

    
}