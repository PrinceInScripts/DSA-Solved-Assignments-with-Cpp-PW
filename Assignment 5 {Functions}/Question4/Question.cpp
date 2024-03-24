/*
Q4. Write a function to count the number of digits in a number and then print the square of this number.
*/

#include<iostream>
using namespace std;
int count_print(int x){
    int c_sum=0;
    while(x>0){
        c_sum++;
        x/=10;
    }
    return c_sum*c_sum;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<"square of this number is : "<<count_print(n);
    
}

/*
#output
Enter a number : 12354
square of this number is : 25 
*/