/*
Q4. There are n flights that are labeled from 1 to n .
You are given an array of flight bookings bookings , where bookings[i] = [firsti, lasti,
seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi
seats reserved for each flight in the range.
Return an array answer of length n , where answer[i] is the total number of seats reserved
 
*/


#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution {
public:   
   
     vector<int> corpFlightBookings1(vector<vector<int>>& bookings, int n) {
      vector<int> answer(n,0);

      for(int i=0;i<bookings.size();i++){
        int ft=(bookings[i][0]-1);
        int st=(bookings[i][1]);

        while(ft<st){
            answer[ft]+=bookings[i][2];
            ft++;
        }
      }

      return answer;
    }
    
     vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
      vector<int> answer(n+1,0);
      
      for(auto& booking:bookings){
          int st=booking[0]-1;
          int et=booking[1];
          int seats=booking[2];

          answer[st]+=seats;
          if(et<n){
            answer[et]-=seats;
          }

      }

      for(int i=1;i<n;i++){
        answer[i]+=answer[i-1];
      }

      answer.pop_back();
      return answer;
      
    }
    
   
};


int main(){
   vector<vector<int>> nums={{1,2,10},{2,3,20},{2,5,25}};
   int n=5;
 
    Solution solution; 
   vector<int> ans=solution.corpFlightBookings(nums,n);

    
    for(auto el:ans){
        cout<<el<<" ";
    }

    return 0;
}
