#include <iostream>
#include <string>

// I need to subtract the sum of the multiples
//
// I could accomplish this by incrementing a value

int EnterNumber(string function)
{
	int number = 0;
	std::cout << function;
	std::cin >> number;
	return number;
}

void Multiplication(int x)
{
	int product = EnterNumber("times: ");
	for(int i=1;i<y;i++)
	{
		product += x;
	}
	std::cout << "product = " << product << std::endl;
}

void Sum(int x, int y)
{
	std::cout << "x + y = " << x + y << std::endl;
}

int main()
{
	int num_one = 0;
	int num_two = 0;
	int num_three = 0;

	std::cout << "enter number 1: ";
	std::cin >> num_one;

	Multiplication(num_one);
	Sum(Multiplication)

	return 0;
}
