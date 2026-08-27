#include<bits/stdc++.h>
using namespace std;


class Customer{
  
  string name;
  int account_num;
  int balance;
  
  // Default Constructor
  public:
  // Customer(){
  //   cout<<"Hello Constructor"<<" ";
  // }

  Customer(){
    name ="aman";
    account_num=4555;
    balance=6599;
  }
  void display(){
    cout<<name<<" "<<account_num<<" "<<balance<<" " ;
  }


  // Parameterized Constructor
  // Customer(string a, int b, int c){
  //   name=a;
  //   account_num-b;
  //   balance=c;
  // }

  // Using this pointer
  // Customer(string name, int accout_num, int balance){
  //   this->name=name;
  //   this->account_num = account_num;
  //   this->balance = balance;
  // }

  // Inline Constructor
  inline Customer(string a, int b, int c ): name(a), account_num(b), balance(c){

  }
};


int main(){
  Customer A1;
  Customer A2("ankur", 85, 56660);
  A1.display();
  A2.display();
}