/*
,v Given an array of strings arr[] cith all strings in locercasew Sort given strings using Bubble Sort
and display the sorted arrayw
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
void sortBubble(vector<string>& arr){
      int n=arr.size();
      
     for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(!flag) break;
             }
      
}
int main(){
    vector<string> arr={"banana", "apple", "cherry", "date"};

    sortBubble(arr);

    

    for(string el:arr){
        cout<<el<<endl;
    }

}