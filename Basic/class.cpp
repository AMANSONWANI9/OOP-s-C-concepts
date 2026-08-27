#include<bits/stdc++.h>
using namespace std;

// creating the class of Student
class Student{
  public:
  string name;
  int age;
  int roll_no;
  string grade;
};

int main(){
  // accesing the class stduent as object
  Student s1;
  s1.name ="aman";
  s1.age=22;
  s1.roll_no=6;
  s1.grade="A";

  cout<<s1.age<<" ";

  // create for another student
  Student s2;
  s2.name="rohan";
  s2.age=23;
  s2.roll_no=66;
  s2.grade="B";
  cout<<s2.name;

}