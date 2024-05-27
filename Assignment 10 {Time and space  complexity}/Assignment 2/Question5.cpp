/*
Q5. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i*=2) {
for(int j = n; j > i; j--) {
c++;
}
}
*/

/*
Time complexity : O(n)
in that 
i=1 then j = n to 1 = n-1
i=2 then j = n to 2 = n-2
i=4 then j = n to 4 = n-4
i=8 then j = n to 8 = n-8
.
.
.
.
i=n then j = n to n-2^x
time complexity is 
(n-1)+(n-2)+(n-3)+(n-4)+(n-8)+.....(n-2^k)
(n+n+n+n+n+..................+n)-(1+2+4+8+......2^k)
n(x+1)-(2^x+1-1)
n(log(n)+1)-(2^log(n)+1-1)
n(log(n))
total time complexity is n(log(n))
*/