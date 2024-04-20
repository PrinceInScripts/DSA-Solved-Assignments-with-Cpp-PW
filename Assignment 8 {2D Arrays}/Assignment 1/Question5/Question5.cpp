/*
Q5. Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

Input 1:
1 2 3 4 5
3 4 5 6 7
7 6 5 4 3
8 7 6 5 4
1 2 37 8 0
Output 1:
    3
    5
7 6 5 4 3
    6
*/


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void display(vector<vector <int>> v,int size){
    int n=v[0].size();
    // cout<<n<<" "<<size/2;
    

    for(int i=0;i<size;i++){
        for(int j=0;j<n;j++){
            if(i==size/2 || j==size/2){
                cout<<v[i][j]<<" ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}
int main(){
    vector<vector <int>> v={{1,2,3,4,5},{3,4,5,6,7},{7,6,5,4,3},{8,7,6,5,4},{1,2,37,8,0}};
    int size=v.size();
    
    display(v,size);
}