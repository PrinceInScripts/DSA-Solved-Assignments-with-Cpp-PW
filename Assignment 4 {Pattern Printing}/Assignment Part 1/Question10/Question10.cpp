/*
Q1. Print the following pattern
Input: n = 4
Output:
1
2 1
3 2 1
4 3 2 1
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
    int a;
    for(int i=1;i<=n;i++){
        a=i;
        for(int j=1;j<=i;j++){
           cout<<a<<" ";
           a--;
        }
        cout<<endl;
    }
}

/*
#Output
Enter a number : 4
1
2 1
3 2 1
4 3 2 1
*/