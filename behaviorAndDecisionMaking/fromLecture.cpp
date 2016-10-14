#include <iostream>
#include <string>
using namespace std;



int myGlobalInt = 20; //GLOBAL SCOPE

int examplesOfAssignment(int a, int b){
  int localVar = a;
  localVar = b;
  localVar = b + b + a;
  localVar = localVar + 1;
  localVar++;
  localVar += 1;
  localVar += 5;
  localVar -= 60;
  localVar *= 30;


  int results = a + b;
  return results;
}


bool someMath_CheckIfEven(int someInt){
  //math operators available
    // + addition
    // - subtraction
    // * multiplication
    // / division
    // % modulus (remainder from division)

  // check if even
  if(someInt % 2) return false;//if odd, a 1 will be the remainder, and we evaluate to true.
  else return true;//if even, there is 0 as a remainder, so this is 0, running our else
}


int crazyArrays_getArrayVal(int position){
  char myCString[15] = "BLAH BLAH BLAH";// Remember that the computer adds the null!!!! AAAHHHH!!! If we used 14 for the size it would be wrong.
  char myOtherString[] = {'h', 'i', '\0'};
  char myEmptyArray[8];


  int myIntArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // myIntArray[1] = 1;//this is true because the index of an array starts at 0 ALWAYS!!!
  // cout << crazyArrays(1) << '\n';//WHEN READY... PUT THIS IN MAIN
  return myIntArray[position];
}


void ifElseConstructStuff(){
  if(true){//truthy
    //do something
    return;
  }


  if(false){//falsy
    //do stuff
    return;
  }
  else{
    //do stuff
  }


  if(0){//falsy
    //do stuff
  }
  else if(""){//falsy string literal, falsy because it's an empty string
    //do stuff
  }


  else if("blah blah"){//truthy string literal - fyi, string literals are c-strings
    //do stuff
  }
  // else if(''){//Not allowed, invalid character representation, exactly one character MUST be within the single quotes!!!
  //   //do stuff
  // }
  else if('\0'){//proper null char, check the ascii table!!!, represented with same storage as int 0
    //null char is 8-bits  0000-0000
    //do stuff
  }

  else{//always the default case
    //do stuff
  }

}


void someCombinationalAndComparisonStuff(){
  int a = 1;
  int b = 0;

  if(a) {}
  else if(b) {}
  else if(a == b) {}
  else if (a = b) {}
  else if (!a) {}
  else if (a && !b) {}
  else if (a != b) {}
  else if (a >= b) {}
  else if (a <= (b = 5)) {}
}


bool ternaryCheckIfEven(int inputEvenOrOdd){
  //   (condition)? ifTrue: ifFalse;
  bool someVariable = (inputEvenOrOdd % 2)? false: true;
  return (inputEvenOrOdd % 2)? false: true;
}


int whileSimpleArrayStep_countSpaceInCString(){
  int arrayPosition = 0;
  int spaceCount = 0;
  char myCString[] = "Good mo     rning starshine. The world says hello!";//an aray of characters
  while(myCString[arrayPosition] != '\0'){//Count spaces in the c-string
    if(myCString[arrayPosition] == ' ')spaceCount++;
    // (myCString[arrayPosition] == ' ')? spaceCount++: void;
    arrayPosition++;//move to the next character position.
  }
  return spaceCount;
}


void complexConditions(){
  int arrayPosition = 0;
  char myCString[] = "Good morning starshine. The world says Hello!";//an array of characters with a secret null ending
  while(myCString[arrayPosition] != '\0'){//print everything except the end sentence punctuation
    if( !(myCString[arrayPosition] == '.' || myCString[arrayPosition] == '?' || myCString[arrayPosition] == '!') ) cout << myCString[arrayPosition];
    arrayPosition++;
  }
}


void infiniteLoop(){
  // while(true){// Oh no! This is an infinite loop!!! AAAAHHHHHHH This will repeat forever
  //   cout << "All work and no play makes Paul a dull boy..." << endl;
  // }


  //  'Nother infinite loop situation! Notice this is VERY similar to the previous functional version
  int arrayPosition = 0;
  char myCString[] = "Good morning starshine. The world says Hello!";//an aray of characters
  while(myCString[arrayPosition] != '\0'){//print everything except the end sentence punctuation
    if( !(myCString[arrayPosition] == '.' || myCString[arrayPosition] == '?' || myCString[arrayPosition] == '!') ) cout << myCString[arrayPosition];
  }
  arrayPosition++;


}


void forLoops(){//prints each character on a new line.
  char myCString[] = "Good morning starshine. The world says Hello!";//an aray of characters with a secret null ending
  for(int charPos = 0; myCString[charPos] != '\0'; charPos++){
    cout << myCString[charPos] << endl;
  }
}


int main(){
    cout << "Hello World\n";





    forLoops(); cout << endl;




    //loop constructs
      // while (/* condition */) {
      //   /* code */
      // }
      //
      // do {
      //   /* code */
      // } while(/* condition */);
      // //
      // for (size_t i = 0; i < count; i++) {
      //   /* code */
      // }
      // for (type varName = 0; varName < count; varName += 17) {
      //   /* code */
      // }



  return 0;
}
