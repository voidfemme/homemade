#include <iostream>
#include <iomanip>

// create a list of legal notations
const char SYMBOLS[5] = {'+','-','*','/','~'};

// check my inputs to determine which symbols are operations

// output english translation of math symbols
void FormatFun()

{
	std::cout << std::setw(40) << std::setfill('=') << "" << std::endl;
}

int main()
{
	char* p = nullptr;
	char userchar;
	int counter = 0;

	FormatFun();
	p = new char;

	while(true)
	{
		std::cout << "Enter element #" << counter << ": ";
		std::cin >> userchar;
		// exit condition: a tilde denotes the end of a number
		p[counter] = userchar;
		counter++;
		if(userchar == '~')
		{
			break;
		}
		else if(counter > 10)
		{
			break;
		}
	}

	std::cout << "While loop exited" << std::endl;

	FormatFun();

	for(int i=0;i<counter - 1;i++)
	{
		std::cout << p[i];
	}
	std::cout << std::endl;

	return 0;
}
