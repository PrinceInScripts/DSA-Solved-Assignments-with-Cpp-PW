/*
Q1. Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
******
* *
* *
******
*/


#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    int n;
    cout<<"Enter another number : ";
    cin>>n;
    
    int a=1;
    for(int i=1;i<=m;i++){
        if(i == m/2 || i == n/2) a=2;
        else a=n;
        for(int j=1;j<=a;j++){
           cout<<"* ";
        }
        cout<<endl;
    }
}

/*
#Output
Enter a number : 4
Enter another number : 6
* * * * * *
* *
* *
* * * * * *
*/