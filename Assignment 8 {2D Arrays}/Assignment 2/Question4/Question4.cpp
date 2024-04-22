/*
Q4. Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
Input 1: n = 3
Output 1: [[1,2,3],[8,9,4],[7,6,5]]
Input 2: n = 1
Output 2: [[1]]
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<vector <int>> matrix(n,vector<int> (n));
    
    int a=1;
    int minR=0;
    int minC=0;
    int maxR=n-1;
    int maxC=n-1;

    while(minR<=maxR || minC<=maxC){
        for(int i=minC;i<=maxC;i++){
            matrix[minR][i]=a;
            a++;
        }
        minR++;

        for(int i=minR;i<=maxR;i++){
            matrix[i][maxC]=a;
            a++;
        }
        maxC--;

        for(int i=maxC;i>=minC;i--){
            matrix[maxR][i]=a;
            a++;
        }
        maxR--;

        for(int i=maxR;i>=minR;i--){
            matrix[i][minC]=a;
            a++;
        }
        minC++;

    }
    

    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
       
    }
   
      
}

