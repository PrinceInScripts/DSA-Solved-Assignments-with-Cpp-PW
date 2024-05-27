/*
Q3. Calculate the time complexity for the following code snippet where k is some constant (k<<n).
int c = 0;
for(int i = 0; i < n; i += k) {
c++;
}
*/

/*
Ans. 
Time complexity : O(n)
The iteration are 
1  0+k=k
2  k+k=2k
3  2k+k=3k
4  3k+k=4k
  .
  .
  .
  .
  .
  .
  .
n  (x+1)k

(x+1)k<n
(x+1)k=n
(x+1)=n/k
x=n/k k is constant
*/