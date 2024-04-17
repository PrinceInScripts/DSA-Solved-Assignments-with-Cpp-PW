/*
Q3. Find the first non-repeating element in the array.
*/
//1 way
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,2,4,5};
    int n=v.size();

    for(int i=0;i<n;i+=2){
        if(v[i]!=v[i+1]){
            cout<<v[i];
            break;
        }
    }
}
*/

//2 way
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v={1,2,2,4,5};
    int n=v.size();

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++ ){
            if(i != j && v[i]==v[j])
                  break;
        }

        if(j==n){
            cout<<v[i];
            return 0;
        }
        return 0;
    }
}
