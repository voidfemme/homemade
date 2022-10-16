#include <iostream>
#include <iomanip>

const int LENGTH = 5;
const char SYMBOL[LENGTH] = {'*','/','+','-'};

void FormatFunction()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

int main()
{
	int counter = 0;
	char input_num;
	char* p = nullptr;
	p = new char;

	// initialize first list item and check for a legal entry.
	FormatFunction();
	std::cout << "(" << counter << "): ";
	std::cin >> p[0];
	counter++;
	// catch first input and ensure that it's a legal expression
	for(int i=0;i<LENGTH;i++)
	{
		if(SYMBOL[i] == p[0])
		{
			std::cout << "error, illegal leading character" << std::endl;
			return 0;
		}
	}
	
	// Input values of the array
	FormatFunction();
	while(true)
	{
		FormatFunction();
		std::cout << "(" << counter << "): ";
		std::cin >> input_num;
		if(input_num == '=' || counter > 15)
		{
			break;
		}
		counter++;
	}
	FormatFunction();
	std::cout << "counter = " << counter << std::endl;

	// output number:
	FormatFunction();
	for(int i=0;i<counter;i++)
	{
		std::cout << std::endl;
		std::cout << "i = " << i << std::endl;
		std::cout << p[i];
	}

	std::cout << std::endl;

	return 0;
}
