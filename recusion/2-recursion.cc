#include <iostream>
#include <iomanip>

// use recursion? to add the sum of numbers including parenthesis.

int Add(int,int);

int main()
{
	// 4
	char array[9] = {'4','+','6','+','(','1','+','2',')'};
	int answer;

	std::cout << "initial array:  ";
	for(int i=0;i<9;i++)
	{
		std::cout << array[i] << " ";
	}

	for(int i=0;i<9;i++)
	{
		if(array[i] = '(')
		{
			while(array[i] != ')')

		}
	}
	std::cout << std::endl;
	return 0;
}
