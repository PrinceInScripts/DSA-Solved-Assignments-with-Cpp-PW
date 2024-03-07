// Q1. How can you output “Physics” and “Wallah” in two different lines in C++?

/*Ans. for showing these two word in different line we have two ways : 
1 way is used of \n in a string and 2 way is used of endl;
*/



#include<iostream>
using namespace std;
int main(){
    //1 way
    cout<<"Physics";
    cout<<"\n";
    cout<<"Wallah";
    cout<<"\n";
    cout<<"--------------------\n";
    //2nd way
    cout<<"Physics";
    cout<<endl;
    cout<<"Wallah";
}