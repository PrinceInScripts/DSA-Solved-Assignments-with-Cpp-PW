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
#include<climits>
using namespace std;
int main(){
    int arr[3][4]={{0,0,1,1},{0,0,0,0},{1,1,1,1}};
    int max=INT_MIN;
    int idx=-1;
    for(int i=0;i<3;i++){
        int *a=arr[i];
        int n=4;
        int lo=0;
        int hi=n-1;
        
        int count=0;
        while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(a[mid]==1){
            count++;
            lo=mid+1;
        } else {
            lo=mid+1;
        }
    }

    if(count>max){
        max=count;
        idx=i;
    }
    }
    cout<<idx<<endl;

    
    

}