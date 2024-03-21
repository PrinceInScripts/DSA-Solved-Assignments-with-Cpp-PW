/*
Q1. Print the following pattern
Input: n = 4
Output :
1
1 2
1 2 3
1 2 3 4
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
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}

/*
#Output
Enter a number : 4
A
A B
A B C
A B C D
*/