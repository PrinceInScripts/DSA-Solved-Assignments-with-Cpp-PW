/*
Q1. Print all the elements of an array in reverse order.
*/

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v,int n){
    if(n<0) return;
    cout<<v[n]<<endl;
    print(v,n-1);

}
int main(){
    vector<int> v={1,2,3,4,5};
    print(v,v.size()-1);
}