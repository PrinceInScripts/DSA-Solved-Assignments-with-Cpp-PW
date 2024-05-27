/*
Q4. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i *= 2) {
c++;
}
*/

/*
Ans. 
Time complexity : O(log(n))
The iteration are
1  1
2  1*2=2
3  2*2=4
4  4*2=8
  .
  .
  .
  .
  .
x  2^x

2^x<n
2^x=n
x=log(n)

because is iterate is 1 because he divided by n to n 
*/