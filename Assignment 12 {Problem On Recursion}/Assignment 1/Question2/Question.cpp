/*
Q2. Print all the increasing sequences of length k from first n natural numbers.
*/

#include<iostream>
#include<string>
using namespace std;
void subSequence(string str,string ans,int k){
    if(k==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        if(ans=="" || ans[ans.size()-1]<ch){
            subSequence(left+right,ans+ch,k-1);
        } 
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    string str;
    for(int i=1;i<=n;i++){
         str+=to_string(i);
    }

    subSequence(str,"",k);
}