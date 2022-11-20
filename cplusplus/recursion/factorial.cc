#include <iostream>
#include <iomanip>

int factorial(int);

int main()
{
	int n;
	int result;

	std::cout << "Enter a non-negative number: ";
	std::cin >> n;

	result = factorial(n);
	std::cout << "factorial of " << n << " = " << result << std::endl;
	return 0;
}

int factorial(int n)
{
	if (n = '(')
	{
		return n * factorial(n - 1);
	} else
	{
		return 1;
	}
}
