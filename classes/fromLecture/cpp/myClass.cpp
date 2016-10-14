#include <iostream>
#include "myClass.hpp"
using namespace std;


//constructor
myClass::myClass(int pNumChars){
  privateVar = publicVar = pNumChars;
}

void myClass::dot(){
  cout << '*';
}

void myClass::dash(){
  cout << '-';
}
