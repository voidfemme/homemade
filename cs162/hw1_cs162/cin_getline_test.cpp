#include <iostream>
#include <string>
using namespace std;

const int MAX_LENGTH = 100;

int main (){
	string getline_test;
	char cin_getline_test[MAX_LENGTH];
	
	// To use cin.getline, you have to use a character array.
	// The first argument is the array, and the second argument is the max length of the input
	// cin.getline requires only the <iostream> library
	
	cout << "Enter some words to test cin.getline, max 100 characters: ";
	cin.getline(cin_getline_test,MAX_LENGTH);

	cout << "Thanks, cin.getline recorded: " << cin_getline_test << endl << endl;

	// To use getline, you only need to use a string variable. I didn't check what the maximum input length is.
	// The first argument is going to be "cin", and the second argument will be the name of the variable.
	// getline requires both the <iostream> and <string> libraries
	cout << "Enter some words to test getline: ";
	getline(cin, getline_test);
	
	cout << "Thanks, getline recorded: " << getline_test << endl << endl;

	cout << "If you want, you can also assign a string value to a character array." << endl;
	string converted_cin_getline = cin_getline_test;
	cout << converted_cin_getline << endl << endl;

	cout << "Thanks, bye!" << endl;
	
	return 0;
}

// So cin.getline() requires a character array and a max string length. But you can change it to a string retroactively.
