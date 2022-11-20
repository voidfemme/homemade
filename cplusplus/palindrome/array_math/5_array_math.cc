#include <iostream>
#include <iomanip>

const int LENGTH = 3;
const char SYMBOL[LENGTH] = {'+','-','*'};

void FormatFun()
{
	std::cout << std::endl << std::setw(40) << std::setfill('-') << "" << std::endl;
}

int Times(char* p, int index)
{
	int prev_val = p[index + 1] - 48;
	int next_val = p[index - 1] - 48;

	return prev_val * next_val;
}

int main(){
	// initialize variables
	char mult_answer = 0;
	char input_num;
	char* p = nullptr;
	p = new char;

	// initialize array
	// 	initialize first item and check for legal entry
	FormatFun();
	for(int i = 0; i < LENGTH; i++)
	{
		if(SYMBOL[i] == p[0])
		{
			std::cout << "error, illegal leading char" << std::endl;
			return 0;
		}
	}
	// 	Input values of array:
	std::cout << "Setting array values: " << std::endl;
	FormatFun();
	int counter = 0;
	while(true)
	{
		std::cin >> input_num;
		if(input_num == '=' || counter > 10) {break;}
		p[counter] = input_num;
		counter++;
	}

	// analyse array (in this section, I'll perform my function calls depending on
	// 	which operator I'm working with.) PEMDAS, but all I care about it is the
	// 	letters "MAS"
	std::cout << "Analysing array..." << std::endl;
	// if *, +, and -, then * first, + next, - last
	for(int i = 0; i < counter; i++)
	{
		if(p[i] == '*')
		{
			mult_answer += Times(p, i);
		}
	}
	for(int i = 0; i < )
	std::cout << " equals " << (int)mult_answer << std::endl;

	// answer += SomeFunction(int array[], int index_num, char operator)
	// multiplication and subtraction can be considered a composition of
	// 	addition and another transformation
	return 0;
}
