// #include<bits/stdc++.h>
// using namespace std;

// class Animal{
//   public:

//   void sound(){
//     cout<<"Animal Sound"<<endl;
//   }
// };

// class Dog : public Animal{
//   void sound(){
//     cout<<"The Dog is Barking"<<endl;
//   }
// };

// int main(){
//   Animal* p;
//   p=new Dog();
//   p->sound();
// }


// Now using virtual runtime using override keyword

#include<bits/stdc++.h>
using namespace std;

class Animal{
  public:

  virtual void sound(){
    cout<<"Animal Sound"<<endl;
  }
};

class Dog : public Animal{
  void sound() override{
    cout<<"The Dog is Barking"<<endl;
  }
};

int main(){
  Animal* p;
  p=new Dog();
  p->sound();
}
