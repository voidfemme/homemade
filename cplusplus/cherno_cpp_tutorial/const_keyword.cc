//https://www.youtube.com/watch?v=4fJBrditnJU&ab_channel=TheCherno
//
// const is a promise that you give that something is not going to change; however,
// it is 'just a promise' and you can break that promise if you choose.

#include <iostream>
#include <string>

void Print(std::string some_text){
	std::cout << some_text << std::endl;
}

void Print(int some_value){
	std::cout << "MAX_AGE = " << some_value << std::endl;
}

void Print(int some_value, std::string variable_name){
	std::cout << variable_name << " = " << some_value << std::endl;
}

int main() {

	const int MAX_AGE = 90;
	// declaring a variable, and promising not to change that variable.
	// In this context, it is an agreed unit of measurement.
	
	// MAX_AGE = 8;
	Print(MAX_AGE, "MAX_AGE");

	int* a = new int;
	// we are creating an integer on the heap

	*a = 2;
	a = (int*)&MAX_AGE;

	Print(*a, "*a");
	
	Print(MAX_AGE, "MAX_AGE");

	return 0;

}
