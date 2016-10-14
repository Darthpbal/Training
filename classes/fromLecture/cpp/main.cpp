#include <iostream>
#include "myClass.hpp"

using namespace std;

int main(){
    cout << "Hello World\n";

    myClass myObject(5);

    for(int i = 0; i < 3; i++){
      myObject.dot();
    }
    cout << ' ';

    for(int i = 0; i < 3; i++){
      myObject.dash();
    }
    cout << ' ';

    for(int i = 0; i < 3; i++){
      myObject.dot();
    }
    cout << endl;

    cout << myObject.publicVar;//change this to privateVar and compile!
    cout << endl;



    // for(int i = 0; i < 3; i++){
    //   for(int j = 0; j < 3; j++){
    //     if(i % 2) myObject.dash();
    //     else myObject.dot();
    //   }
    //   cout << ' ';
    // }
    // cout << endl;

  return 0;
}
