/*
Q2. Print index of a given element in an array. If not present, print -1.
*/

#include<iostream>
#include<vector>
using namespace std;
int search(int i,vector<int>& v,int n){
    if(v[i]==n) return i;
    search(i+1,v,n);

}
int main(){
    vector<int> v={1,2,3,4,5};
    cout<<search(0,v,4);
}