/*
Q4. Write a program to print the row number having the maximum sum in a given matrix.
1 3 5 7
3 4 7 8
1 4 12 3
Output 1: 2
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<vector <int>> v={{1,3,5,7},{3,4,7,8},{1,4,12,3}};
    int row=v.size();
    int col=v[0].size();

    int max=INT_MIN;
    int row_num;

    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
           sum+=v[i][j];
        }
        if(sum>max){
            row_num=i;
            max=sum;
            cout<<sum<<endl;
        }
        
    }

    cout<<row_num;
}