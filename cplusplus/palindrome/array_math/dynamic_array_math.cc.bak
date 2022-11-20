#include <iostream>
#include <iomanip>

void FormatFun()
{
	std::cout << std::setw(45) << std::setfill('-') << "" << std::endl;
}

void PopulateArray(int*,int);
void PrintArray(int*,int);
void ArraySummary(int*,int);
void AddArrays(int*,int*,int*,int);

int main()
{
	int* array_one = nullptr;
	int arr_sz = 0;

	FormatFun();
	std::cout << "Enter the number of array elements: ";
	std::cin >> arr_sz;
	FormatFun();

	array_one = new int[arr_sz];

	std::cout << "Array one: ";
	PopulateArray(array_one,arr_sz);
	std::cout << "Array two: ";
	PopulateArray(array_two,arr_sz);
	std::cout << "Array_one values: ";
	PrintArray(array_one,arr_sz);
	std::cout << "Array_two values: ";
	PrintArray(array_two,arr_sz);
	AddArrays(array_one,array_two,answer,arr_sz);

	std::cout << "Answer: ";
	PrintArray(answer,arr_sz);
	return 0;
}

void PopulateArray(int* p, int arr_sz)
{
	for(int i=0;i<arr_sz;i++)
	{
		std::cout << "Enter Element #" << i << ": ";
		std::cin >> p[i];
		FormatFun();
	}
}

void PrintArray(int* p, int arr_sz)
{
	for(int i=0;i<arr_sz;i++)
	{
		std::cout << p[i] << ", ";
	}
	std::cout << p[arr_sz-1] << std::endl;
	FormatFun();
}

void AddArrays(int* array_one, int* array_two, int* answer, int arr_sz)
{
	for(int i=0;i<arr_sz;i++)
	{
		answer[i] = array_one[i] + array_two[i];
		answer[i + 1] += answer[i] / 10;
		answer[i] %= 10;
	}
}
void ArraySummary(int* p, int arr_sz)
{
	int largestNum = p[0];
	int smallestNum = p[0];
	for(int i=0;i<arr_sz;i++)
	{
		if(p[i] >= largestNum)
		{
			largestNum = p[i];
		}
		if(p[i] <= smallestNum)
		{
			smallestNum = p[i];
		}
	}
	std::cout << "The largest: " << largestNum << "\n";
	std::cout << "The smallest: " << smallestNum << "\n";
	FormatFun();
}
