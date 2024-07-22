/*
 Q4. Create a class ‘Employee’ with following data members :
 Name
 Employee ID
 Salary
 Class should have following member functions:
 Display() : To display the characteristics of each employee
 Create 5 objects of Employee and write functions to calculate
 averageWage() : To return the average salary of all employees
 maxSalary() : To return the employee whose salary is maximum
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
class Employee{
private:
   string name;
   int employeeId;
   double salary;
public:
  Employee(string name,int employeeId,double salary){
    this->name=name;
    this->employeeId=employeeId;
    this->salary=salary;
  }

  void display(){
    cout<<"Name : "<<name<<" ";
    cout<<"Employee Id : "<<employeeId<<" ";
    cout<<"Salary : "<<salary<<endl;
  }

  double getSalary(){
    return salary;
  }

};

 double averageWage(vector<Employee>& employees){
       double totalSalary=0;

       for(auto& emp:employees){
         totalSalary+=emp.getSalary();
       }

       return totalSalary/employees.size();
  }
  
int main(){
   vector<Employee> employees={
     {"John", 101, 50000},
    {"Alice", 102, 60000},
    {"Bob", 103, 55000},
    {"Emily", 104, 62000},
    {"David", 105, 58000}
   };

   cout<<"Details of all employees : "<<endl;
   for(auto& emp:employees){
      emp.display();
   }

   cout<<"Average salary of all employees : $"<<averageWage(employees)<<endl;


}