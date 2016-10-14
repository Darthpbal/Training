//Some variables with global scope
bool myBool = true;//1
boolean myOtherBool = 0;//0

int myInt = 5;   //0000000000000101






float myFloat = 3.14;//size - 00000000000000000000000000000000

double myDouble = 3.141593;//size - 0000000000000000000000000000000000000000000000000000000000000000







char myChar = 'A';  //00000000
char myEquivalentChar = 65;
char myNectChar = myChar + 1;//This stores int 66 as a char, which is 'B'





//c-STRING
char myC_String[] = "Hello World! \n";//That special slash-n is a newline character
char MyEquivC_String[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', ' ', '\n', '\0'}; //contains exactly the same data as myC_String


// string object class
String myString = "Hello world! \n";//high memory



String myOtherString = myString.toLowerCase();
myString.substring(from, to);
char myOtherCString = myString.c_str();





void myFunction(){
  int myFunctionScope;
}


void setup() {
  int tooBigInt = 40000; //not allowed! this will loop to a small number!
  int justFineSize = -30000; // totally fine :D

  int setupScope;
}

void loop() {
  int loopScope;//declaration without assignment
  myFunction();

  loopScope = 5;//simple assignment with one literal
  loopScope = loopScope + 17 + 53;//simple assignment with two literals

}
