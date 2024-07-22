/*
Q1. Create a class ‘date’ that contains three members namely date, month and year. Create 2 objects of this 
class with different dates and now compare the two. If the dates are equal then display message as "Equal" 
otherwise "Unequal". Use Getters & Setters. 
*Note : The function should be a member function of this class.
*/

#include<iostream>
using namespace std;
class Date{
 private:
    int date;
    int month;
    int year;

 public:
    int getDate(){
        return date;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    void setDate(int date){
        this->date=date;
    }
    void setMonth(int month){
        this->month=month;
    }
    void setYear(int year){
        this->year=year;
    }
};
int main(){
     Date date1;
     date1.setDate(10);
     date1.setMonth(5);
     date1.setYear(2024);

     Date date2;
     date2.setDate(25);
     date2.setMonth(7);
     date2.setYear(2024);

     if(date1.getDate()==date2.getDate()){
        cout<<"Equal"<<endl;
     } else {
        cout<<"Unequal"<<endl;
     }
}