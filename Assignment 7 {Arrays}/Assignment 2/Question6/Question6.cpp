/*
Q6: Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.
*/

#include<iostream>
#include<vector>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                swap(&v[i],&v[j]);
            }
        }
    }
    return;

}

int uniqueNum(vector<int> nums){
     int unique;
     int n=nums.size();
     for(int i = 0; i < n; i += 2) {
        if(i == n - 1 || nums[i] != nums[i + 1]) {
            unique = nums[i];
            break;
        }
    }

    return unique;
}
int main(){
    vector<int> v={3,2,4,2,4,3,8};
    display(v);
    sort(v);
    display(v);
    // int unique;
    // for(int i=0;i<v.size();i+=2){
    //     if(v[i]!=v[i+1]){
    //         unique=v[i];
    //         break;
    //     }
    // }

    // cout<<unique;
    int unique=uniqueNum(v);
    cout<<unique;
}