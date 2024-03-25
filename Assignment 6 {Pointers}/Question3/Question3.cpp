/*
Q3. Find the output of the following code snippet.
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
*/

/*
int a = 10, b = 20;    
int *ptr = &a;  
b = *ptr + 1;
ptr = &b;
cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;

#output 
11 10 11
*/