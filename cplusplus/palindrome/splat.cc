#include <iostream>
#include <iomanip>
#include <cmath>

/* int Function(length,digit){
	for(int i = 0; i < length; i++){
		digit = a[i] * pow(10, length - i) + a [i+1];

	}
} */

int main(){
	// palindrome == a(10^n + 10^(numdigits)) +
	//
	// i can use std::sizeof(number) in order to get the length of a given number.
	int max_digits;
	
	for(int x = 0; x < 100; x++){
		if(x % 2 == 0){ 
			std::cout << x << " :P";
			if(x % 5 == 0){
				std::cout << " 8===D"; 
				if(x % 3 == 0){
					std::cout << "- - - #";
				}
			} 
			std::cout << std::endl;
		}
		else{ std::cout << x << " :-*" << std::endl; }

	}
	return 0;
}
