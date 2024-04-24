/*
Q5. Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12
*/


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    int n=str.length();
    
    int val=0;
    for(int i=0;i<n;i++){
        int digit=str[i]-'0';
        val=val*10+digit;
    }

  
   cout<<val;
    
   
}