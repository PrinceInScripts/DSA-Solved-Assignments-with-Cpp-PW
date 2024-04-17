/*
Q4. Move all zeros to the end of the array.
*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0, 6, 0, 7, 6, 0, 9, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    int left=0;
    int right=n-1;

    while(left<right){
        if(arr[left]==0){
            left++;
        } else if(arr[right]!=0){
            right--;
        } else{
             int temp=arr[left];
             arr[left]=arr[right];
             arr[right]=temp;
             left++;
             right--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
