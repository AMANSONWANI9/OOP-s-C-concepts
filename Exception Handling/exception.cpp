// An exception is an unexpected problem that arises during the execution
// of a program our program tereminates suddenly with some
// errors/issues. Exception occurs during the running of the program

// The try ketword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one or more
// catch blocks. If an exception occurs, try block throws that exception.

// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block
// The code to handle the exception is written inside the catch block.

// An exception in c++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// teerminate the current function and starts finding a matching
// catch block to handle the thrown exception.



#include<bits/stdc++.h>
using namespace std;

class Customer{
  string name;
  int balance , account_num;

  public:
  Customer(string name, int balance, int account_num){
    this->name = name;
    this->balance = balance;
    this->account_num = account_num;
  }

  //deposit amount
  void deposit(int amount){
    if(amount>0){
      balance+=amount;
      cout<<amount<<" is credited successfully\n";
      cout<<"Your Total balance is :"<<balance<<endl;
    }else{
      cout<<"Invalid Amount"<<endl;
    }
  };

  //withdrwal amount
  void withraw(int amount){
    if(balance>=amount && amount>0){
      balance-=amount;
      cout<<amount<<" is deducted is successfully\n";
      cout<<"Your Total balance is :"<<balance<<endl;
    }else if(amount<0){
      throw "amount should be greater than 0 ";
    }else{
      throw "Your balance is low";
    }
  };
};

int main(){
  Customer C1("aman", 5000,56);
  try{
  C1.deposit(100);
  C1.withraw(6000);
  C1.deposit(2000);
  }catch(const char *e){
    cout<<"Exception Occured :"<<e<<endl;
  }
  
}