/*
Q2. WAP to find the largest three elements in the array.
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
int main(){
    vector<int> v={3,2,4,6,8,5,1,7};
    display(v);
    sort(v);
    display(v);
    cout<<"Largest three elements : ";
    int count=0;
    for(int i=v.size()-1;i<v.size();i--){
         cout<<v[i]<<" ";
         count++;
        if(count==3) break;
        
    }

}