/*
Q6. Find the output of the below code

#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}
*/

/*
#output
49


Explanation : 
we are follow the rule of hierarchy according to : 
( 4 + 7 / 5 * 6 * 6+9 )% 100 // first we solve bracket 
( 4 + 7 / 5 * 6 * 6+9 ) // in bracket we split the addition material so 
--------------------------------
{
7 / 5 * 6 * 6    // according to hierarchy we move left to right so
1 * 6 * 6    // 7/5=1
36
}
--------------------------------
(4 + 36 + 9) % 100
(49) % 100 // 4 + 36 +9 = 49
49 % 100 
49
so the final result of i is 49


*/