/*
Q3. Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.
*/

#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;
int sort(vector<int>& arr,int k){
       
       for(int i=1;i<arr.size();i++){
        int idx=i;
          while(idx>=1){
            if(arr[idx-1]>arr[idx])
            swap(arr[idx-1],arr[idx]);
            idx--;
          }
       }
      
     return arr[k-1];
    
}
int main(){
    vector<int> arr={7,10,4,3,20,15};
    int k=3;
        
   cout<< sort(arr,k)<<endl;
}