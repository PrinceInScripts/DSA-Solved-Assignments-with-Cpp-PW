/*
Q4. Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna
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
    reverse(str.begin()+n/2,str.end());
    cout<<str;
}