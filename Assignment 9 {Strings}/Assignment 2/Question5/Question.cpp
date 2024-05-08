/*
Q5. Given a sentence ‘str’, return the word that is lexicographically maximum

Input : str = "proud to be pwians"

Output : pwians

Input : str = "decode dsa with pw"

Output : with
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    vector<string> strs;
    stringstream ss(str);
    string temp;
    
    while(ss>>temp){
        strs.push_back(temp);
    }

    for(int i=0;i<strs.size();i++){
        string s=strs[i];
    }
}