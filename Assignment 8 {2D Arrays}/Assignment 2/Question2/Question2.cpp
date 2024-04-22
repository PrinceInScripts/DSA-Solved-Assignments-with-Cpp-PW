/*
Q2. Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
3 6 9
2 5 8
1 4 7
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}

int main(){
    vector<vector <int>> v={{1,2,3},{4,5,6},{7,8,9}};
    int row=v.size();
    int col=v[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(i<j){
             swap(&v[i][j],&v[j][i]);
           }
        }
    }
    for(int i=0;i<row;i++){
        swap(&v[0][i],&v[row-1][i]);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}

