/*
Q4. Find the minimum operations required to sort the array in increasing order. In one operation ,
you can set each occurrence of one element to 0.
*/

#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
int minOperation(vector<int>& arr){
       
      int n=arr.size();
      int mxOperation=INT_MIN;
      sort(arr.begin(),arr.end());
      
      for(int i=0;i<n;i++){
         int maxCount=1;
         while(i+1<n && arr[i]==arr[i+1]){
            maxCount++;
            i++;
         }
         mxOperation=max(mxOperation,maxCount);
         i++;
      }
      return (n-mxOperation);
      
    
}
int main(){
    vector<int> arr={10,20,20,10,30,10};        
   cout<< minOperation(arr)<<endl;
}