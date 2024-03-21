/*
Q1. Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

/*
Ans . 
To print out this pattern, we need to carefully observe its structure. Upon observation, we notice that it consists of 4 lines in a row and 4 lines in a column when we consider the number 4. Through observation, we derive a concept: to generate this pattern, we need to utilize a nested loop. In the outer loop, we iterate over the lines, while in the nested loop, we iterate over the values required to form the pattern.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a<<" ";
        }
        a++;

        cout<<endl;
    }
}