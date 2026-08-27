#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  string name;
  int age;
  int roll_no;
  string grade;
};

int main(){
  // Dynamic creation of an object
  Student *S = new Student;
  (*S).name = "aman";
  (*S).age=16;
  (*S).roll_no=25;
  (*S).grade="A++";

  cout<<S->name<<endl;
  cout<<S->age<<endl;
  cout<<S->roll_no<<endl;
  cout<<S->grade<<endl;
}