#include <iostream>
#include <iomanip>

int main()
{
	char* p = nullptr;
	int length = 10;
	p = new char;
	int del_index = 0;

	std::cout << "Enter 10 characters: ";
	for(int i=0;i<length;i++)
	{
		std::cin >> p[i];
	}

	// This bit does the deletion////////////////////
	std::cout << "Enter which digit to delete: ";
	std::cin >> del_index;

	for(int i=del_index; i<length; i++)
	{
		p[i-1] = p[i];
	}
	length--;
	/////////////////////////////////////////////////

	std::cout << "New array:\n";
	for(int i=0;i<length;i++)
	{
		std::cout << p[i];
	}

	return 0;
}
