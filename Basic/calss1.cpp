#include<bits/stdc++.h>
using namespace std;

// creating the class of Student
class Student{
  private:
  string name;
  int age;
  int roll_no;
  string grade;

  // function Setter and Getter
  public:
  void setname(string s){
    name =s;
  }
  void setage(int a){
    age=a;
  }
  void setrollno(int r){
    roll_no=r;
  }
  void setgrade(string g){
    grade = g;
  }

  void getname(){
    cout<<name<<endl;
  }
};

int main(){
  // accesing the class stduent as object
  Student s1;
  s1.setname("aman");
  s1.setage(22);
  s1.setrollno(6);
  s1.setgrade("A");
  s1.getname();
}