#include<bits/stdc++.h>
using namespace std;

class Customer{
  string name;
  int account_num, balance;
  static int total_account;
  static int total_balance;

  public:
  Customer(string name, int account_num, int balance){
    this->name = name;
    this->account_num=account_num;
    this->balance = balance;
    total_account= total_account+1;
    total_balance+=balance;
  };

  // function to calcuate total_amount
  void deposit(int amount){
    if(amount>0){
      balance+=amount;
      total_balance+=amount;
    }
  }

  //withdrawl functiion
  void withdraw(int amount){
    if(amount<=balance && amount>0){
      balance-=amount;
      total_balance-=amount;
    }
  }

  // function to display the data
  void display(){
    cout<<name<<" "<<account_num<<" "<<balance<<" "<<total_account<<endl;
  }

  // seperate function to count total customer
  void display_total(){
    cout<<"Total Customer on this bank: "<<total_account<<endl;
  }

  void total_display(){
    cout<<"Total Customer in this bank : "
    << total_account<<endl;

    cout<< "Total balance in this bank :"
    << total_balance<<endl;
  }
};

int Customer :: total_account=0;
int Customer :: total_balance = 0;

int main(){
  Customer A1("aman", 123, 1000);
  A1.deposit(5000);
  A1.display();
  Customer A2("rohit", 152,4522);
  A2.display();
  Customer A3("ankur", 5566, 8855);
   A3.display();
   A1.display_total();
   A1.total_display();
  
  
 
}