//===> ENCAPSULATION
#include<bits/stdc++.h>
using namespace std;

class Customer{
  private:
  string name;
  int account_num;
  int balance;
  int age;

  public:

  //Constructor
  Customer(string name, int account_num, int balance, int age){
    this->name = name;
    this->account_num = account_num;
    this->balance = balance;
    this->age=age;
  }

// age validation check
void updateAge(int age){
  if(age>0 && age<100){
    this->age = age;
  }else{
    cout<<"Please Enter valid age."<<endl;
  }
}

  //Deposit Function
  void deposit(int amount){
    if(amount>0){
      balance+=amount;
    }else{
      cout<<"Please enter valid amount."<<endl;
    }
  }

  //Withdrawl Function
  void withdraw(int amount){
    if(amount<=balance && amount>0){
      balance-=amount;
    }else{
      cout<<"Please enter valid amount."<<endl;
    }
  }

  void display(){
    cout<<name<<" "<<account_num<<" "<<balance<<" "<<age<<endl;
  }


};

int main(){
  Customer A1("aman", 1, 1000,10);
  Customer A2("amit", 2,563,12);
  Customer A3("ankur", 5,866,45);
  A1.display();
  A1.deposit(1000);
  A1.display();
  A1.withdraw(100);
  A1.display();
  A1.deposit(-10);
}