/*
Q3. Write a program to print the matrix in wave form.
Input 1:
1 2 3
4 5 6
7 8 9
Output : 7 4 1 2 5 8 9 6 3
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector <int>> v={{1,2,3},{4,5,6},{7,8,9}};
    int row=v.size();
    int col=v[0].size();
 
    for(int i=0;i<row;i++){
        if(i%2==0){
        for(int j=col-1;j>=0;j--){
           cout<<v[j][i]<<" ";
        }
        } else {
        for(int j=0;j<col;j++){
          cout<<v[j][i]<<" ";  
        }
        }
       
    }
   
    
}

