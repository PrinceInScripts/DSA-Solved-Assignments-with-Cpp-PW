/*
Q2. Write a function that takes the radius of a circle as an argument and returns its area.
*/

#include<iostream>
using namespace std;
float area(int r){
    float pi=3.14;
    return (pi*r*r);
}
int main(){
    int r;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Area of circle is : "<<area(r);
}

/*
#output
Enter radius of circle : 2
Area of circle is : 12.56
*/