/*
Q1. Count the number of triplets whose sum is equal to the given value x.
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,1,2,4,2,0};
    int x=5;
    int count=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==x){
                    count++;
                }
            }
        }
    }

    cout<<count;

}