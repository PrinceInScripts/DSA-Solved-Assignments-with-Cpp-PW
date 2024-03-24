/*
Q1. Print the following pattern
Output :

*        *
 *      *
  *    *
   *  *
     *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i=1;i<=n+1;i++){
        
        for(int j=1;j<=2*n+1;j++){
            if((i==j) || (i+j==10)) cout<<"* ";
            else cout<<"  ";
           
        }
         cout<<endl;
    }
}

/*
#output
Enter a number : 4
*               *
  *           *
    *       *
      *   *
        *
*/