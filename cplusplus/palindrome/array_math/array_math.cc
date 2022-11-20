#include <iostream>
#include <iomanip>

void FormatFun(){
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

void InitArray(int* array,int length){
	for(int i=0;i<length;i++){
		std::cout << "> ";
		std::cin >> array[length - 1 - i];
	}
	std::cout << std::endl;
}

void PrintArray(int* array, int length){
	for(int i=0;i<length;i++){
		std::cout << array[length-1-i];
	}
	std::cout << std::endl;
}

void AddArrays(int* array_one, int* array_two, int length){
	for(int i=0;i<length;i++){
		array_one[i] += array_two[i];
		array_one[i+1] += array_one[i] / 10;
		array_one[i] %= 10;
	}
	FormatFun();
}

int main(){
	int length = 6;
	int arr_one[length];
	int arr_two[length];

	std::cout << "enter values:\n";
	InitArray(arr_one,length);

	std::cout << "enter values:\n";
	InitArray(arr_two,length);

	FormatFun();
	
	PrintArray(arr_one, length);
	std::cout << "+ ";
	PrintArray(arr_two, length);

	FormatFun();

	std::cout << "addition: \n";
	AddArrays(arr_one,arr_two,length);
	PrintArray(arr_one,length);

	return 0;
}
