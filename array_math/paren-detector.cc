#include <iostream>
#include <iomanip>

void FormatFun()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

int main()
{
	/* Goal of this program is to output any text between a set of parenthesis
	 * and no other code. I want to output the most-innermost parens possible. */

	int arr_sz = 0;
	char userchar;
	char* p = nullptr;
	p = new char;

	std::cout << "expression: ";
	while(userchar != '=')
	{
		std::cin >> userchar;
		p[arr_sz] = userchar;
		arr_sz++;
	}

	bool open_parens = false;
	int sum = 0;

	for(int i=0; i<arr_sz; i++)
	{
		if(p[i] == ')') {open_parens = false;}
		if(open_parens == true)
		{
			std::cout << p[i];
			sum += (int)p[i] - 48;
		}
		std::cout << " ";
		if(p[i] == '(') {open_parens = true;}
	}
	std::cout << std::endl;
	FormatFun();
	std::cout << "sum of items in parens: " << sum << std::endl;
	return 0;
}
