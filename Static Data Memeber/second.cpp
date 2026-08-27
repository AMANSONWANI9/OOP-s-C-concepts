// ==> STATIC MEMBER FUNCTION
#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  static int count;
  
  // now define static member function
  static void showCount(){
    cout<<"total student is :"<< count<<endl;
  }
};
int Student :: count=10;

int main(){
  Student::showCount();

  return 0;
}