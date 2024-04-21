/*
Q1. Write a program to print the elements of both the diagonals in a square matrix.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
1 3
 5
7 9
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int main(){
    vector<vector <int>> v={{1,2,3},{4,5,6},{7,8,9}};
    int row=v.size();
    int col=v[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j || i+j==row-1){
                cout<<v[i][j]<<" ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    
}