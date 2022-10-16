#include <iostream>
#include <iomanip>

void FormatFun()
{
	std::cout << std::setw(45) << std::setfill('-') << "" << std::endl;
}

void PopulateArray(int*,int);
void PrintArray(int*,int);
void ArraySummary(int*,int);
void AddArrays(int*,int);

int main()
{
	int* p = nullptr;
	int arr_sz = 0;

	FormatFun();
	std::cout << "Enter the number of array elements: ";
	std::cin >> arr_sz;
	FormatFun();
	p = new int[arr_sz];

	PopulateArray(p,arr_sz);
	PrintArray(p,arr_sz);

	FormatFun();

	AddArrays(p,arr_sz);

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
	for(int i=0;i<arr_sz;i++)
	{
		std::cout << "Enter Element #" << i << ": ";
		std::cin >> p[arr_sz + i];
		FormatFun();
	}
}

void PrintArray(int* p, int arr_sz)
{
	for(int i=0;i<arr_sz;i++)
	{
		std::cout << p[i] << ", ";
	}
	std::cout << std::endl;
	FormatFun();

	for(int i=0;i<arr_sz;i++)
	{
		std::cout << p[arr_sz + i] << ", ";
	}
	std::cout << std::endl;
	FormatFun();
}

void AddArrays(int* p,int arr_sz)
{
	for(int i=0;i<arr_sz;i++)
	{
		std::cout << p[arr_sz + i] + p[i] << std::endl;
	}
}
/* void AddArrays(int* p, int arr_sz)
{
	for(int i=0;i<arr_sz;i++)
	{
		answer[i] = p[i] + array_two[i];
		answer[i + 1] += answer[i] / 10;
		answer[i] %= 10;
	}
}
*/
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
