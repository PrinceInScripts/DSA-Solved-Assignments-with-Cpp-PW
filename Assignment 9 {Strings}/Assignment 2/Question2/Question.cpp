/*
Q2. Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str="1241";
    vector<int> nums;
    for(int i=0;i<str.size();i++){
        nums.push_back(str[i]-48);
    }

    sort(nums.begin(),nums.end());

    cout<<nums[nums.size()-2];
}