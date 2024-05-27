/*
Q1. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 0; i /= 2) {
c++;
}
*/
/*
Ans. 
Time complexity : O(log(n))
The iteration are
1  n
2  n/2
3  n/4
4  n/8
5  n/16
  .
  .
  .
  .
  .
  .
n  n/2^x

n/2^x>0
n/2^x=1
x=log(n)
*/