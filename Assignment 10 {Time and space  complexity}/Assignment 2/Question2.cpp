/*
Q2. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 1; j < n; j *= 2) {
c++;
}
}
*/

/*
Ans. 
Time complexity : O(n*(log(n)))
Outer loop time complexity is n
Inner loop time complexity is log(n)
So Overall time complexity is n*log(n)
*/