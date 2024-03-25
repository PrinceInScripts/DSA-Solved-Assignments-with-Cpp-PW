/*
Q2. Find the second largest element in the given Array in one pass.
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
    int max=INT_MIN;
    for(int i=0;i<size;i++){
     if(arr[i]>max){
        max=arr[i];
     }
    }
    int smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] != max && arr[i]>smax){
              smax=arr[i];
        }
    }
   
   cout<<"second largest element in Array : "<<smax;
}