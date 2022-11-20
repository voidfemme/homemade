#include <iostream>

void SwapNum(int &i, int& j)
{
	i = i + j;
	j = i - j;
	i = i - j;
}

int main()
{
	int a = 10;
	int b = 20;
	std::cout << "a = " << a << "\nb = " << b << std::endl;
	SwapNum(a,b);
	std::cout << "a = " << a << "\nb = " << b << std::endl;
}
