/*
Write a program to add two matrices and save the result in one of the given matrices.
*/

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row : ";
    cin>>m;
    int n;
    cout<<"Enter col : ";
    cin>>n;

    cout<<"Enter 1 array : "<<endl;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter 2 array : "<<endl;
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           a[i][j]+=b[i][j];
        }
    }
   

    cout<<endl;
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
           cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    
}