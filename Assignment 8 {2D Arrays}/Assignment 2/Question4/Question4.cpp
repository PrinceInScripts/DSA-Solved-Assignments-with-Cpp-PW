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
    vector<vector <int>> v(n,vector<int> (n));
    
   
    

    for(int i=0;i<n;i++){
        if(i%2==0){
       for(int j=0;j<n;j++){
           cout<<v[i][j]<<" ";
          
        }
        } else {
         for(int j=n-1;j>=0;j--){
          cout<<v[i][j]<<" ";
         
        }
        }
     
       
    }
   
      
}

