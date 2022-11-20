#include "array_math.h"

ArrayInt::ArrayInt()
{
	length = 2;
	p = new char;
}

ArrayInt::ArrayInt(int arr_sz)
{
	length = arr_sz;
	p = new char;
}

void ArrayInt::SetArraySize(int arr_sz)
{
	length = arr_sz;
}

void ArrayInt::SetArrayValues()
{
	std::cout << "Set Values for ArrayInt: ";
	for(int i=0;i<length;i++)
	{
		std::cin >> p[i];
	}
}

int ArrayInt::GetArraySize()
{
	return length;
}

void ArrayInt::PrintArray()
{
	std::cout << "Array values: ";
	for(int i=0;i<length;i++)
	{
		std::cout << p[i];
	}
	std::cout << std::endl;
}
