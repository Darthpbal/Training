void functionDeclarationWithoutDefinition();//system has no problem with a func delcaration missing a definition.


void someFuncDeclaration(int passByVal, bool& passByRef);
int fact(int input);//a factorial function. I abbreviated it because it's less keys to type.

char someFuncDefinition(char charmander){
  Serial.println("I'm part of the BODY of a function DEFINITION!");
  return (charmander < 127)? charmander + 1: charmander % 30;
}





void setup() {
  Serial.begin(9600);
  int a = 10, b = 50;
  Serial.println(a);//wait for it..........
  Serial.println(b);//wait for it..........


  Serial.println(someFuncDefinition('a'));


  someFuncDeclaration(a, b);
  Serial.println(a);//unchanged
  Serial.println(b);//woah! someFuncDeclaration modified this variable even on the outside!
  Serial.println();//these empty ones are used for making space for the next line
  Serial.println();


  Serial.println("Done with startup! :D");
}




void loop() {
  delay(10000);
}



void someFuncDeclaration(int passByVal, int& passByRef){//function DEFINITION, but the name refers to the declaration at the top.
                              //But defining the function contents in a seperate place.
                              //This is the same as how you can declare a variable like "int someVar;" without actually putting any values in it yet.
                              //Same thing is allowed with functions!



  Serial.print("passByVal = ");
  Serial.println(passByVal);
  Serial.print("passByRef = ");
  Serial.println(passByRef);


  passByVal = passByRef = 5;//check out the outcome of the values on the outside of the function!!!!


  Serial.print("passByVal = ");
  Serial.println(passByVal);
  Serial.print("passByRef = ");
  Serial.println(passByRef);
  Serial.print("check passByVal and passByRef after this function!");
  Serial.println();
}







int fact(int input){
  if(input < 1) return 1;
  else return input * fact(input - 1);
}






///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////


// type functionName(type inputA, type inputB, type inputC){
//   doStuff();
//   doOtherStuff();
//   if( someConditionIsTrue() ) return someReturnStuff();
//
//   return inputA;
// }


///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
