//===> ENCAPSULATION
#include<bits/stdc++.h>
using namespace std;

class Customer{
  private:
  string name;
  int account_num;
  int balance;

  public:

  //Constructor
  Customer(string name, int account_num, int balance){
    this->name = name;
    this->account_num = account_num;
    this->balance = balance;
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
    cout<<name<<" "<<account_num<<" "<<balance<<endl;
  }


};

int main(){
  Customer A1("aman", 1, 1000);
  Customer A2("amit", 2,563);
  Customer A3("ankur", 5,866);
  A1.display();
  A1.deposit(1000);
  A1.display();
  A1.withdraw(100);
  A1.display();
  A1.deposit(-10);
}