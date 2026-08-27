//===> SINGLE INHERITANCE
#include<bits/stdc++.h>
using namespace std;

class Human{
  protected:
  string name;
  int age;
  
  public:
  void work(){
    cout<<"I am working now"<<endl;
  }

  //parent class constructor
  Human(string name , int age){
    this->name= name;
    this->age = age;
  }

};

//single inheritance class
class Student:public Human{
  int roll_no;
  int fees;

  public:
  // Student(string name, int age, int roll_no, int fees){
  //   this->name = name;
  //   this->age = age;
  //   this->roll_no = roll_no;
  //   this->fees = fees;
  // }

  // In derivied class use of parent class derivied
  Student(string name , int age, int roll_no, int fees):Human(name , age){
    this->roll_no = roll_no;
    this->fees = fees;
  }

  void display() {
    cout << "Student name : " << name << endl;
    cout << "Student age : " << age << endl;
    cout << "Student roll Num : " << roll_no << endl;
    cout << "Student fees : " << fees << endl;
}
};


int main(){
  Student A1("aman", 22,55,632);
  A1.display();
  A1.work();
}