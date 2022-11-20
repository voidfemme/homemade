#include <iostream>
#include <iomanip>
#include <cmath>

void FormatFun(){
	std::cout << std::setw(40) << std::setfill('-') << " " << std::endl; 
}


int main(){

	int length = 9;

	std::cout << "enter length: ";
	std::cin >> length;
	char palindrome[length];

	// initialize values:
	for(int i = 0; i <= length; i++){
		palindrome[i] = 0;
	}

	std::cout << "palindrome what? ";
	for(int i = 0; i <= length; i++){
		std::cin >> palindrome[i];
	}

	std::cout << "values:" << std::endl;


	for(int i = 0;i <= length; i++){
		std::cout << palindrome[i];
	}


	for(int i = 0;i <= length; i++){
		std::cout << palindrome[length - i]; 
	}
	std::cout << std::endl;

	return 0;
}
