/*
Q1. Print the following pattern
Output :

      A
    B A B
  C B A B C
D C B A B C D
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
      
       for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
       
        a=i;
       for(int j=1;j<=i-1;j++){
        cout<<(char)(a+64)<<" ";
        a--;
       }

        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }

        cout<<endl;
    }
}

/*
#output
Enter a number : 4
      A
    B A B
  C B A B C
D C B A B C D
*/