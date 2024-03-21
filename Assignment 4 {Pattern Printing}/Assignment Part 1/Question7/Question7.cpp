/*
Q1. Print the following pattern
Input: n = 4
Output :
****
****
****
****
*/

/*
Ans . 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
Enter a number : 4
* * * *
* * * *
* * * *
* * * *
* * * *
*/