/*
Q2. Input a string of length n and count all the consonants in the given string.
Input : "pwians"
Output : 4
Input : "abdc"
Output : 3
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    int n=str.length();
    int count=0;

    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u');
        else {
            count++;
        }

    }

    cout<<"count all the consonants in Given String is : "<<count;
}