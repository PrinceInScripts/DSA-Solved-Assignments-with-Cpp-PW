/*
Q.1 Calculate the time complexity for the following code snippet.int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 0; j * j < n; j++) {
cout << “PhysicsWallah ”;
}
}
*/

/*
Ans. 
Time complexity : O(n*n^1/2)
Outer loop time complexity is n
Inner loop time complexity is n^1/2
So Overall time complexity is n*n^1/2
*/