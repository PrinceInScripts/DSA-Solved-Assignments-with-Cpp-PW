/*
Q3. Check if the given array is sorted or not.
*/

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

int isSorted(vector<int> v){
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;

}
int main(){
    vector<int> v={3,2,4,6,8,5,1,7};
    bool flag=isSorted(v);
    
    if(flag)  cout<<"Given array is Sort";
    else  cout<<"Given array is not Sort";
}