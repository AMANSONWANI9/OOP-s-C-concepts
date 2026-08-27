#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ifstream fin;
  // file ko open kro
  fin.open("zoom.txt");

  //file read kro
  char c;
  c=fin.get();
  
  while(fin>>c){
    cout<<c;
  }
  fin.close();
}