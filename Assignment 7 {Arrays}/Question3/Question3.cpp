/*
Q3. Find the minimum value out of all elements in the array.
*/

#include<iostream>
#include<climits>
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
    int min=INT_MAX;
    for(int i=0;i<size;i++){
       if(arr[i]<min){
        min=arr[i];
       }
    }
    cout<<"Minimum value out of all elements in the array : "<<min;
}