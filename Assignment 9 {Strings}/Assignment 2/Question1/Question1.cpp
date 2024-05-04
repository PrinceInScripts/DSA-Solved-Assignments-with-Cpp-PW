/*
Q1. Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"
Input : str = "pw"
Output : "pwwp"
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    cin>>str;
    string str1=str;
    reverse(str1.begin(),str1.end());
    str=str+str1;
    cout<<str;
}