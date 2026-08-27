//==> MULTILEVEL INHERITANCE
#include<bits/stdc++.h>
using namespace std;

class Person{
  protected:
  string name;

  public:
  void introduce(){
    cout<<"Hello my name is :"<<name<<endl;
  }
};

class Employee:public Person{
  protected:
  int salary;

  public:
  void monthly_salary(){
    cout<<" Monthly Salary of employee :"<<salary<<endl;
  }
};

class Manager:public Employee{
  public:
  string department;

  //Constructor to initialize the value
  public:
  Manager(string name, int salary, string department){
    this->name = name;
    this->salary =salary;
    this->department = department;
  }
  
  void work(){
    cout<<"I am leading the department :"<< department<<endl;
  }
};

int main(){
  Manager M1("aman", 25665522, "HR");
  M1.work();
  M1.introduce();
  M1.monthly_salary();
}