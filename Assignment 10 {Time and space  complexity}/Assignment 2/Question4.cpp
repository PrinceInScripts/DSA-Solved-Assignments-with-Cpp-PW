/*
Q4. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 0; i /= 2) {
for(int j = 0; j < i; j ++) {
c++;
}
}
*/

/*
Ans. 
Time complexity : O(n)
in that 
i=n then j to n = n
i=n/2 then j to n/2 = n/2
i=n/4 then j to n/4 = n/4
.
.
.
.
i=n/2^x then j to n/2^x=n/2^x
time complexity is n+n/2+n/4........1
n/1-1/2
n/1/2
2n
n
total time complexity is n
*/