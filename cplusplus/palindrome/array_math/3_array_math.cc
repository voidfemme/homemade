#include <iostream>
#include <string>

const char SYMBOLS[5] = {'*','/','+','-','='};

void InputNum(char* p)
{
	char userchar;
	int counter = 0;
	while(true)
	{
		std::cout << "(" << counter << "): ";
		std::cin >> userchar;
		if(userchar == '~' || counter > 10)
		{
			break;
		}
		p[counter] = userchar;
		counter++;
	}
	std::cout << std::endl;
}

void LeadingSymbolErr(int x)
{
	for(int i=0;i<5;i++)
	{
		if(x == SYMBOLS[i])
		{
			exit;
		}
		else
		{
			break;
		}
	}
}

void English(char* p)
{
	LeadingSymbolErr(p[0]);
	for(int i = 0; i < 5; i++)
	{
		switch(p[i])
		{
			case '+':
				std::cout << " plus ";
				break;
			case '-':
				std::cout << " minus ";
				break;
			case '/':
				std::cout << " divided by ";
				break;
			case '*':
				std::cout << " times ";
				break;
			case '%':
				std::cout << " mod ";
				break;
			case '=':
				std::cout << " equals: ";
				break;
			default:
				std::cout << p[i];
				break;
				
		}
	}
	std::cout << std::endl;
}

int main()
{
	int counter = 0;
	char* input_num = nullptr;
	char* answer = nullptr;

	input_num = new char;
	answer = new char;
	// input expression
	InputNum(input_num);
	English(input_num);

	return 0;
}
