/*
Q5. Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={3,2,4,6,8,5,1,7};
    
    for(int i=0;i<v.size();i++){
        if(i%2==0) v[i]+=10;
        else v[i]*=2;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}