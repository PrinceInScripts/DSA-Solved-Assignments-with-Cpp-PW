/*
Q1. Print the following pattern
Output :

1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int b=1;
    for(int i=1;i<=2*n-1;i++){
        if(i<4){
            cout<<b<<" ";
            b++;
        } else{
            cout<<b<<" ";
            b--;
        }
        
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int a=0;
        for(int j=1;j<=n-i;j++){
              a++;
              cout<<a<<" ";
            
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}

/*
#output
Enter a number : 4
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/