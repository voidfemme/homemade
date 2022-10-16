#include <iostream>
#include <iomanip>
#include <cmath>

void PalendromeMaker(int);

void FormatFun(){
	std::cout << std::setw(40) << std::setfill('-') << " " << std::endl; 
}


int main(){
	// palindrome == a(10^n + 10^(numdigits)) +
	//
	// i can use std::sizeof(number) in order to get the length of a given number.
	int length = 0;

	while(length != -1){
		std::cout << "length = ";
		std::cin >> length;
		PalendromeMaker(length);
	}

	FormatFun();

	// add my values for each:
	return 0;
}

void PalendromeMaker(int length){
	int palindrome = 0;
	long long int big_palindrome = 0;
	long long int small_palindrome = 0;
	int decreasing = length;
	int increasing = 0;

	for(int i = 0;i <= length / 2; i++){
		std::cout << "i = " << i << std::endl;
		std::cout << "decreasing = " << decreasing << std::endl;
		std::cout << "increasing = " << increasing << std::endl;
		std::cout << "decreasing 10^decreasing = " << decreasing * pow(10,decreasing) << std::endl;

		// where the magic happens
		big_palindrome += decreasing * pow(10,decreasing); 
		decreasing--;
		increasing++;

		std::cout << "big_palindrome = " << big_palindrome << std::endl;
	}
	
	decreasing = length;
	increasing = 0;
	FormatFun();

	for(int i = 0;i <= length / 2; i++){
		std::cout << "i = " << i << std::endl;
		std::cout << "decreasing = " << decreasing << std::endl;
		std::cout << "increasing = " << increasing << std::endl;
		std::cout << "decreasing * 10^increasing = " << decreasing * pow(10,increasing) << std::endl;

		// where the magic happens
		small_palindrome += decreasing * pow(10,increasing);
		decreasing--;
		increasing++;

		std::cout << "small_palindrome = " << small_palindrome << std::endl;
	}

	FormatFun();
	std::cout << "palindrome = " << palindrome << std::endl;

}
// 4(10^5 +10^0) + 2 * (10^4 + 10^2) + 3 * (10^3 + 10^3)
//
// [(7, 0,7;7)(6,1,60;67)]
