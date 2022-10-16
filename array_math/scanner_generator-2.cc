#include <iostream>
#include <iomanip>

void FormatFun();
bool InBrackets(bool,int,int);

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

	bool open_bracket = false;
	for(int i=0; i<arr_sz; i++)
	{
		open_bracket = InBrackets(p[i], open_bracket, arr_sz);
	}

	return 0;
}

void FormatFun()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

bool InBrackets(bool open_bracket, int* p, int& arr_sz)
{
	// iterate through inputs
	for(int i=0; i<arr_sz; i++)
	{
		// we check for a closing bracket before printing or returning any value
		if(p[i] = ')')
		{
			return false;
		}
		while(open_bracket)
		{
			if(p[i] == ')')
			{
				return false;
			}
			std::cout << p[i];
			
			if(p[i] = '(')
			{
				for(int i=0; i<arr_sz; i++)
				{
					open_bracket = InBrackets(p[i], open_bracket, arr_sz);
				}
			}

			if(i<arr_sz) i++;
			else break;
		}
		std::cout << " ";
		if(p[i] == '(') return true;
	}
	std::cout << std::endl;
	return false;
}
