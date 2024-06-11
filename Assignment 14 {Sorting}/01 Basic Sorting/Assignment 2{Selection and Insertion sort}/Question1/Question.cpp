/*
Q4. Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int minimumSum(vector<int>& digits){
      int n=digits.size();
      int num1=0;
      int num2=0;
      for(int i=0;i<n;i++){
        if(i%2==0){
            num1=num1*10+digits[i];
        } else{
            num2=num2*10+digits[i];
        }
      }
      return num1+num2;
      
}
int main(){
    vector<int> digits={1,3,2,4,5};

    cout<<minimumSum(digits);
}