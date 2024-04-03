/*
Q7: If an array arr contains n elements, then check if the given array is a palindrome or not .
*/


#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> reverse(vector<int> v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

    return v;
    
}

int main(){
    vector<int> v={4,2,1,2,1,2,4};
    // vector<int> v={1,2,3,4,5,6,7};
    vector<int> v1=reverse(v);
    int count=0;
    bool flag=false;
    for(int i=0;i<v.size();i++){
        if(v[i]==v1[i]){
           flag=true;
           count++;
        }
    }

   if(count==v.size() && flag){
     cout<<"Given array is palindrome";
   }
   else {
    cout<<"Given array is not palindrome";
   }
}