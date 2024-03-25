/*
Q4. Given an array, predict if the array contains duplicates or not.
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
    bool flag=false;
    for(int i=0;i<size;i++){
        for(int j=i+1;i<size;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    }

    if(flag){
        cout<<"The array contains Duplicates";
    } else{
        cout<<"No";
    }
    
}