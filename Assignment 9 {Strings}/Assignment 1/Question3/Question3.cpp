/*
Q3. Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
*/


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    int n=str.length();
    string str1=str;
    
    reverse(str.begin(),str.end());
    bool flag=false;
    for(int i=0;i<n;i++){
        if(str1[i]!=str[i]){
          flag=true;
          break;
        }
    }
    if(!flag) cout<<"Yes";
    else cout<<"No";
}