#include <iostream>
#include <iomanip>

void FormatFun(){
	std::cout << std::setw(50) << std::setfill('-') << "" << std::endl;
}

void InitArray(int* array,int length){
	for(int i=0;i<length;i++){
		std::cout << "> ";
		std::cin >> array[i];
	}
}

void PrintArray(int* array, int length){
	std::cout << "values:\n";
	for(int i=0;i<length;i++){
		std::cout << array[i];
	}
	std::cout << std::endl;
}

void AddArrays(int* array_one, int* array_two, int length){
	for(int i=0;i<length;i++){
		array_one[i] += array_two[i];
		array_one[i+1] += array_one[i] / 10;
		array_one[i] %= 10;
	}
}

void MultArrays(int* array_one, int* array_two, int length){
	int mult_result = 0;
	for(int i=0;i<length;i++){
		mult_result += array_one[i] * array_two[i];

	}
	std::cout << "mult result = "<< mult_result << std::endl;
}

int main(){
	int length = 10;
	int arr_one[length + 1] = {0,0,0,0,0,0,0,0,0,0,0,};
	int arr_two[length + 1] = {0,0,0,0,0,0,0,0,0,0,0,};

	std::cout << "enter values:\n";
	InitArray(arr_one,length);

	std::cout << "enter values:\n";
	InitArray(arr_two,length);

	MultArrays(arr_one,arr_two,length);
	
	AddArrays(arr_one,arr_two,length);

	PrintArray(arr_one, length);


	return 0;
}
