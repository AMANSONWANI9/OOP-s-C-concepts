#include<bits/stdc++.h>
using namespace std;

int main(){
  try{
    int *p = new int[1000000000];
    cout<<"Memory allocation is succesfully\n";
    delete[]p;
  }catch(const exception &e){
    cout<<"Exception occured due to line 6 :"<<e.what()<<endl;
  }
}