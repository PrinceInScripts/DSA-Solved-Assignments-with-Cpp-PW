/*
Q3. How much space does the following data types take?
a) int
b) bool
c) float
*/

/*
Ans. taking space via data type is depend on the compiler. in according to these compiler
a) int :- It takes 4 bytes means 32 bits space on memory
b) bool :- It takes only 1 bytes means 8 bits space on memory 
c) float :- It takes 4 bytes means 32 bits space on memory
*/

#include<iostream>
using namespace std;
int main(){
    int a=5;
    bool flag=true;
    float b=5.3;

    cout<<"Space taking via int in memory is : "<<sizeof(a)<<" bytes and "<<sizeof(a)*8<<" bits"<<endl;
    cout<<"Space taking via int in memory is : "<<sizeof(flag)<<" bytes and "<<sizeof(flag)*8<<" bits"<<endl;
    cout<<"Space taking via int in memory is : "<<sizeof(b)<<" bytes and "<<sizeof(b)*8<<" bits"<<endl;
    
}