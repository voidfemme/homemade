#include <iostream>

int subtract(int,int);

int add(int a, int b){
	return (a + b);
}

int subtract(int a, int b){
	return (a - b );
}

int multiply(int a, int b){
	// 4 * 5 counts four, five times, so this requires a while loop
	int grab = a;
	for(int i=1;i<b;i++){
		grab = add(a,grab);
	}
	return grab;
}

int divide(int a, int b){
	int grab = a;
	int grab_2 = 0;
	for (int i=a;i>0;i-b){
		grab_2++;
	}
	return grab_2;
}

int main(){
	int value_one = 0;
	int value_two = 0;
	int addition_ans = 0;
	int multiply_ans = 0;
	int subtract_ans = 0;
	int divide_ans = 0;

	std::cout << "enter the first value: ";
	std::cin >> value_one;
	std::cout << "enter the second value: ";
	std::cin >> value_two;
	addition_ans = add(value_one,value_two);
	std::cout << value_one << " + " << value_two << " = " << addition_ans << std::endl;

	multiply_ans = multiply(value_one,value_two);
	std::cout << value_one << " * " << value_two << " = " << multiply_ans << std::endl;

	subtract_ans = subtract(value_one,value_two);
	std::cout << value_one << " - " << value_two << " = " << subtract_ans << std::endl;

	divide_ans = divide(value_one,value_two);
	std::cout << value_one << " / " << value_two << " = " << divide_ans << std::endl;
	return 0;
}
