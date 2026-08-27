#include<bits/stdc++.h>
using namespace std;

class Area{
  public:
  int  fun(int a){
    cout<<"Area of Circle :"<< 3.14*a*a<<endl;
  };

  int fun(int a, int b){
    cout<<"Area of Rectangle :"<< 2*(a+b)<<endl;
  }

  int fun(int a, int b, int c){
    cout<<"Area of  :"<< a*b*c<<endl;
  }
};

int main(){
  Area A1;
  A1.fun(2);
  A1.fun(2,5);
  A1.fun(2,8,9);
}