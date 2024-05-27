/*
Q6. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 0; j < i; j++){
c++;
}
}
*/

/*
Ans. 
Time complexity : O(n^2)
The iteration are
i=0 j to i = 0 bar
i=1 j to i = 1 bar
i=2 j to i = 2 bar
i=3 j to i = 3 bar
i=n j to n = n bar
0+1+2+3+4+....n bar
n*(n+1)/2
n^2/2+n/2
the constant is remove
n^2+n
according to rule
n^2
because is iterate is 1 because he divided by n to n 
*/