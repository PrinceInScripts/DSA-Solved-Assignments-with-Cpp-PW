/*
Q1. Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Input :
1 1 1
1 0 1
1 1 1
Output :
1 0 1
0 0 0
1 0 1
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector <int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    int x=-1;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            x=i;
        }
    }
   
   }

     if(x!=-1){
        for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
        if(i==x || j==x){
            matrix[i][j]=0;
        }
    }
    }
    } else {
        cout<<"0 is not here ...";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
