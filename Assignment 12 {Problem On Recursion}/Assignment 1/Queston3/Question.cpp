/*
Q2. Print all the increasing sequences of length k from first n natural numbers.
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subSequence(int idx,int n,int k,vector<int> ans){
    if(ans.size()==k){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=idx+1;i<=n;i++){
          ans.push_back(i);
          subSequence(i,n,k,ans);
          ans.pop_back();
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
    vector<int> ans;
    subSequence(0,n,k,ans);
}