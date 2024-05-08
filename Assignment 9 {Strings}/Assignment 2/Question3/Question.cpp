/*
Q3. Input a string and return the number of substrings that contain only vowels
Input : str = "abjkoe"

Output : 4

Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"

Input : str = "hgdhpw"

Output : 0
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||  str[i]=='o' || str[i]=='u'  ){
             count++;
        }
    }

    cout<<count;
}


