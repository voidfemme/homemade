#include <iostream>
#include <iomanip>

int brackets(int);

int main()
{
	char* p = nullptr;
	int arr_sz = 0;
	p = new char;

	std::cout << "Enter " << arr_sz << " digit character expression. only digits and parens are allowed\n Indicate the end of the expression with '=' > ";
	while(p[arr_sz-1] != '=')
	{
		std::cin >> p[arr_sz];
		arr_sz ++;
	}

	std::cout << "\n";

	std::cout << "arr_sz = " << arr_sz << "\n";
	std::cout << "You entered: ";
	for(int i=0; i<arr_sz; i++)
	{
		std::cout << p[i];
	}
}
