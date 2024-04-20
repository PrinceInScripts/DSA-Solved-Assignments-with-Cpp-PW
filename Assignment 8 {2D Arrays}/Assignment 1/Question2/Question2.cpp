/*
Q2. Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).

Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}};
    int l1,l2,r1,r2;
    cout<<"Enter a coordinate : ";
    cin>>l1>>r1;
    cout<<"Enter Another coordinate : ";
    cin>>l2>>r2;
    int sum=0;
    
    if(l2>l1){
        for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
               sum+=v[i][j];
        }
    }
    } else {
    for(int i=l2;i<=l1;i++){
        for(int j=r1;j<=r2;j++){
               sum+=v[i][j];
        }
    }
    }

    cout<<sum;
   
    
}