#include<iostream>
#include<fstream>

using namespace std;

int main(){
  // file open krna
  ofstream fout;
  fout.open("zoom.txt");

  //write krna
  fout<<"Hello India";

  fout.close();
}