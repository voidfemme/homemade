#include <iostream>

void format_fun

int main(){
	int num_1 = 0;
	int num_2 = 0;
	int answer_1 = 0;
	std::cin >> num_1;
	std::cin >> num_2;

	for (int i=0;i<num_1;i++){
		std::cout << "i = " << i << std::endl; 
		std::cout << "num_1 = " << num_1 << std::endl;
		std::cout << "num_2 = " << num_2 << std::endl;
		answer_1++;
		std::cout << "answer_1 = " << answer_1 << std::endl;
	}
	std::cout << "final answer: " << answer_1 << std::endl;
	// 15 / 5 = 3
	// 	in other words, we add 'num_1', 'num_2' times;
	//
	// a + b = c
	// 3 + 3 = 6
	//	   a + b = c
	// 	   6 + 3 = 9
	// 		   9 + 3 = 12
	// 			   12 + 3 = 15
	// 			break.
	return 0;
}
