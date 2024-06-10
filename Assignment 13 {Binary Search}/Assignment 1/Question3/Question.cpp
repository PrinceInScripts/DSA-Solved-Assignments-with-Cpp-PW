/*
Q3. Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int rowMaximumOne(vector<vector<int>>& arr,int n,int m){
    int max=INT_MIN;
    int idx=-1;
    for(int i=0;i<n;i++){
       
       int lo=0;
       int hi=m-1;
       int x=-1;
       int ones=0;
       while(lo<=hi){
          int mid=lo+(hi-lo)/2;

          if(arr[i][mid]==1){
              x=mid;
              hi=mid-1;
          } else{
            lo=mid+1;
          }
       }
       if(x==-1) ones=0;
       else ones=n-x;
    
       if(ones>max){
           idx=i;
           max=ones;
       }
    }

    return idx;
}
int main(){
    vector<vector<int>> arr={{0,1,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}};
    
    int n=arr.size();
    int m=arr[0].size();

    cout<<rowMaximumOne(arr,n,m);

    
    

}