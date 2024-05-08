/*
Q4. Given an array of strings. Check whether they are anagram or not.

Input : s = "car" , t = "arc"

Output : True

Input : s = "book" , t = "hook"

Output : False
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string t;
    cout<<"Enter first String : ";
    cin>>s;
    cout<<"Enter second String : ";
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s.size()==t.size())
       for(int i=0;i<s.size();i++){
        if(s[i]==t[i]){
            cout<<"True";
            break;
        }else {
            cout<<"False";
            break;
        }
       }
    else cout<<"False";
   
    
    

}