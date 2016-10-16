#include <iostream>
#include <string>
using namespace std;

int main(){
	string dataString, col1, col2, col3;
	int position = 1;
	cout << "data string delimited by commas: " << endl;
	cin >> dataString;
	for(int i = 0; i <= dataString.size(); i++ ){
	// for(int i = 0; dataString[i] != '\0'; i++ ){//if you're using a cstring, remember that the null character will be at the end!
		if(dataString[i] == ','){
			i++;
			position++;
		}
		switch (position) {
			case 1:
			    col1 += dataString[i];
			    break;
			case 2:
			    col2 += dataString[i];
			    break;
			case 3:
			    col3 += dataString[i];
			    break;
		}
	}
	cout << "\ncol1 = "
		<< col1
		<< "\ncol2 = "
		<< col2
		<< "\ncol3 = "
		<< col3
		<< endl;
    return 0;
}
