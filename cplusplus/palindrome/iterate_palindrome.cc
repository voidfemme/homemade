#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
	// declare variables:
	long long int ascending = 0;
	long long int descending = 0;
	int comma_counter = 0;
	// iterate each number:
	for(int i = 0; i < 10; i++){
		std::cout << "i = " << i << " | \n";

		//use this digit to then iterate through each digit.
		for(int j = 0; j < i; j++){
			std::cout << j << " : " << i * pow(10,9-j);
			comma_counter++;
		}
		std::cout << "\n------------------------------------------------------\n";

	}
	return 0;
}










// loop one gets

// a palindrome consists of
//
// ascending numbers of each magnitude
// power of 10^descending
