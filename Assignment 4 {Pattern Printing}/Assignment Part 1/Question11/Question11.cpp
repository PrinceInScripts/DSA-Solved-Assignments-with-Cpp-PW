/*
Q1. Print the following pattern
Input: n = 4
Output:
*
**
***
****
***
**
*
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
    int a=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=a;j++){
           cout<<"* ";
        }
        if(i<n) a++;
        else a--;
        cout<<endl;
    }
}

/*
#Output
Enter a number : 4
*
* *
* * *
* * * *
* * *
* *
*
*/