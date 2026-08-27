#include<bits/stdc++.h>
using namespace std;

//student
//boy
//girl
//male
//female

class Student{
  public:
  void print(){
    cout<<"I am a student"<<endl;
  }
};

class Male{
  public:
  void Maleprint(){
    cout<<"Ram is male"<<endl;
  }
};

class Female{
  public:
  void Femaleprint(){
    cout<<"sita is female"<<endl;
  }
};

class Boy:public Student, public Male{
  public:
  void Boyprint(){
    cout<<"I am a boy"<<endl;
  }
};

class Girl: public Student ,public Female{
  public:
  void Girlprint(){
    cout<<"She is a girl"<<endl;
  }
};

int main(){
  Girl G1;
  G1.Femaleprint();
  G1.Girlprint();
  G1.print();

  Boy B1;
  B1.Boyprint();
  B1.Maleprint();
  B1.print();
}

