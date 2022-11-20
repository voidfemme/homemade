#include <iostream>
#include <iomanip>

void FormatFunction()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

void PrintArray(char*p, int arr_sz)
{
	for(int i=0; i<arr_sz; i++)
	{
		std::cout << (int)p[i] - 48 << " ";
	}
	std::cout << std::endl;
}

void DeleteElement(char* p, int& arr_sz, int index)
{
	for(int i=index+1;i<arr_sz;i++)
	{
		p[i] = p[i+1];
	}
	arr_sz -= 1;
}

void Addition(char* p, int& arr_sz, int index)
{
	p[index] = p[index] + p[index + 1] - 48;
	DeleteElement(p, arr_sz, index);
	DeleteElement(p, arr_sz, index);
}

int main()
{
	int arr_sz;
	char* p;
	p = new char;
	int index = 0;

	std::cout << "Enter length: ";
	std::cin >> arr_sz;

	FormatFunction();
	std::cout << "Enter number: ";
	for(int i=0; i<arr_sz; i++)
	{
		std::cin >> p[i];
	}

	FormatFunction();
	std::cout << "You entered: ";
	PrintArray(p,arr_sz);

	FormatFunction();
	std::cout << "add which? ";
	std::cin >> index;

	FormatFunction();
	Addition(p,arr_sz,index - 1);
	PrintArray(p,arr_sz);
	return 0;
}
