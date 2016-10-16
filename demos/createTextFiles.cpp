#include <iostream>
#include <string>
#include <fstream>//used for reading and writing to a text file
#include <cstdlib>//used for the exit function to close the program at a specific point.
using namespace std;


//function declarations for using functions to make file operations a little cleaner looking
void createTextFiles(string file1, string file2, string file3, ofstream& sourceFile1, ofstream& sourceFile2, ofstream& sourceFile3);
void printToTextFiles(string file1, string file2, string file3, ofstream& sourceFile1, ofstream& sourceFile2, ofstream& sourceFile3);
void closeTextFiles(ofstream& sourceFile1, ofstream& sourceFile2, ofstream& sourceFile3);



int main(){

  //how to open a file in c++ for reading
  string fileName = "fileName.txt";
  ofstream fileToWriteTo(fileName);//the arguments are the inputs for the class constructor
  //This checks for whether or not the file was opened succesfully. In the function definitions it's written a little cleaner looking.
  if(fileToWriteTo == 0){
    cout << "unable to open " << fileName << " for reading... Terminating program";
    exit(-1);//A display of a different error code than 0 using the exit function
  }
  fileToWriteTo << "This string literal is being written to " << fileName << ". Notice that it's being treated the same as cout???" << endl;
  fileToWriteTo << "This is the stringstream class behavior, which the fstream class uses. fstream class is for text file manipulation, " << endl;
  fileToWriteTo << "which is complex, so many classes are actually used inside the fstream class.\n";
  fileToWriteTo << "reading a file in c++ is very similar, but instead of the object being an ofstream, you use ifstream, and instead of << you use >> just like cout and cin.\n";
  fileToWriteTo.close();//this is the fstream class close function...............which closes the file




  //bulk file operations.
  string  file1 = "foo", file2 = "bar", file3 = "bash";
	ofstream sourceFile1, sourceFile2, sourceFile3;
	createTextFiles(file1, file2, file3, sourceFile1, sourceFile2, sourceFile3);
	printToTextFiles("file1", "file2", "file3", sourceFile1, sourceFile2, sourceFile3);
	closeTextFiles(sourceFile1, sourceFile2, sourceFile3);
	return 0;
}

void createTextFiles(string file1, string file2, string file3, ofstream& sourceFile1, ofstream& sourceFile2, ofstream& sourceFile3){
	sourceFile1.open(file1.c_str());
	sourceFile2.open(file2.c_str());
	sourceFile3.open(file3.c_str());
	if(!sourceFile1 || !sourceFile2 || !sourceFile3){
        cout << "unable to open one of the files\n";
        exit(-1);
    }
}

void printToTextFiles(string file1, string file2, string file3, ofstream& sourceFile1, ofstream& sourceFile2, ofstream& sourceFile3){
	sourceFile1 << file1 << endl;
	sourceFile2 << file2 << endl;
	sourceFile3 << file3 << endl;
}

void closeTextFiles(ofstream& sourceFile1, ofstream& sourceFile2, ofstream& sourceFile3){
	sourceFile1.close();
	sourceFile2.close();
	sourceFile3.close();
}
