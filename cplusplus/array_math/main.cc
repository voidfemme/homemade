#include "array_math.h"
#include <iomanip>

void FormatFunction()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

// ArrayInt InputArray()
// {
// 	int arr_sz = 0;
// 	std::cout << "enter size of array: ";
// 	std::cin >> arr_sz;
// 	ArrayInt arr_one(arr_sz);
// 	arr_one.SetArrayValues();
// 	return arr_one;
// }

void PrintArray(char* p, int arr_sz)
{
	std::cout << std::endl;
	for(int i=0; i<arr_sz; i++)
	{
		std::cout << i << " | ";
	}
	std::cout << std::endl;
	for(int i=0; i<arr_sz;i++)
	{
		std::cout << (int)p[i] - 48 << " | ";
	}
	std::cout << std::endl;
}

int DeleteElement(char* p, int arr_sz, int del_index)
{
	for(int i=del_index-1;i<arr_sz;i++)
	{
		p[i] = p[i + 1];
	}
	arr_sz--;
	return arr_sz;
}

int Addition(char* p, int& arr_sz, int index)
{
	p[index-1] = p[index - 1] + p[index + 1];
	arr_sz = DeleteElement(p, arr_sz, p[index]);
	arr_sz = DeleteElement(p, arr_sz, p[index+1]);
	return arr_sz;
}

// a mathematical expression can be evaluated by the left term, the right term, and the operator
// k:

int main()
{
	int arr_sz;

	char* p = nullptr;
	p = new char;
	int del_index = 0;

	std::cout << "Enter Length: ";
	std::cin >> arr_sz;

	FormatFunction();
	std::cout << "Enter number: ";
	for(int i=0; i<arr_sz;i++)
	{
		std::cin >> p[i];
	}
	FormatFunction();
	std::cout << "You entered: ";
	PrintArray(p, arr_sz);

	std::cout << "Delete which? ";
	std::cin >> del_index;
	arr_sz = Addition(p,arr_sz,del_index - 1);

	FormatFunction();
	std::cout << "new array values: ";
	PrintArray(p, arr_sz);

	return 0;
}
