/*
 Q2. Create a class to specify data on students with these attributes: Roll number, Name, Department, Course, 
Year of joining. Create 2 class variables. Now, create a member function to check if two students have the same 
Department
*/

#include<iostream>
using namespace std;
class Student{
private:
  int rollNumber;
  string name;
  string department;
  string course;
  int noj;

public:
  Student(int roll,string n,string d,string c,int no){
    rollNumber=roll;
    name=n;
    department=d;
    course=c;
    noj=no;
  }
  void setRollNumber(int rollNumber){
    this->rollNumber=rollNumber;
  }
  void setName(string name){
    this->name=name;
  }
  void setDepartment(string department){
    this->department=department;
  }
  void setCourse(string course){
    this->course=course;
  }

  string getDepartment(){
    return department;
  }


  bool isDepartmentSame(Student& other){
    if(department==other.department) return true;
    else return false;
  }
  
};
int main(){
    Student s1(101,"Raj","CS","DSA",2011);
    // s1.setName("Raj");
    // s1.setDepartment("CS");
    // s1.setCourse("DSA");
    // s1.setRollNumber(101);
    
    Student s2(102,"Knight","CS","DSA",2012);
    // s2.setName("Knight");
    // s2.setDepartment("CS");
    // s2.setCourse("DSA");
    // s2.setRollNumber(102);

    s1.isDepartmentSame(s2) ? cout<<"True" : cout<<"False";
}