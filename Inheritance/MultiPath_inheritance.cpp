//===> MULTIPLE INHERITANCE
#include<bits/stdc++.h>
using namespace std;

class Engineer{
  public:
  string specilization;

  void work(){
    cout<<"I have specilization in : "<<specilization<<endl;
  }
};

class Youtuber{
  public:
  int subscribers;

  void contentCreator(){
    cout<<"I have a subscriber of : "<<subscribers<<endl;
  }
};

//Multiple inheritance
class Codeteacher : public Engineer , public Youtuber{

  public:
  string name;

  // constructor
  Codeteacher(string specilization , int subscribers , string name){
    this->specilization = specilization;
    this->subscribers = subscribers;
    this->name = name;
  }

  void showCase(){
    cout<<"My name is :"<<name<<endl;
    work();
    contentCreator();
  }
};

int main(){
  Codeteacher A1("AI Engineer" , 2500, "Aman");
  A1.showCase();
  // A1.work();
  // A1.contentCreator();
  
}