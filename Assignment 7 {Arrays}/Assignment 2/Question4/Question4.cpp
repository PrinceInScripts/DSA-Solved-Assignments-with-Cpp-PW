/*
Q4. Find the difference between the sum of elements at even indices to the sum of elements at odd
indices.
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={3,2,4,6,8,5,1,7};
    
    int even_sum=0;
    int odd_sum=0;
    int diff;

    for(int i=0;i<v.size();i++){
        if(v[i]%2==0) even_sum+=v[i];
        else odd_sum+=v[i];
    }

    if(even_sum>odd_sum) diff=even_sum-odd_sum;
    else diff=odd_sum-even_sum;

    cout<<"difference is : "<<diff;

}