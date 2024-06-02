/*
Q5. Program to convert a decimal number to binary.
*/

#include<iostream>
#include<vector>
using namespace std;
void decimalToBinary(int n,vector<int> ans){
   if(n==1){
      ans.push_back(n);
      for(int i=ans.size()-1;i>0;i--){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
      return;
   }
   if(n==0){
    ans.push_back(n);
      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
      return;
   }
   int rem=n%2;
   ans.push_back(rem);
//    cout<<n/2<<endl;
   decimalToBinary(n/2,ans);
   
}
int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
 
    vector<int> ans;
    decimalToBinary(num,ans);
}