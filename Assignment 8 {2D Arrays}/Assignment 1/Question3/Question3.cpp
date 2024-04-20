/*
Q3. Write a C++ program to find the largest element of a given 2D array of integers.
1 3 4 6
2 4 5 7
3 5 6 8
4 6 7 9
Output 1: 9
*/


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<vector <int>> v={{1,3,4,6},{2,4,5,7},{3,5,6,8},{4,6,7,9}};
    int row=v.size();
    int col=v[0].size();

    int max=INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j]>max) max=v[i][j];
        }
    }

    cout<<max;
}