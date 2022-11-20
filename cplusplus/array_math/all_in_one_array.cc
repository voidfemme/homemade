#include <iostream>
#include <iomanip>

void FormatFun()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

int main()
{
	int arr_sz = 0;
	char userchar;
	int counter = 0;
	char* p = nullptr;
	p = new char;
	char** q = nullptr;
	q = new char*;
	
	q[0] = &p[0];

	std::cout << "expression: ";
	while(userchar != '=')
	{
		std::cin >> userchar;
		p[counter] = userchar;
		counter++;
	}

	for(int i=0; i<counter; i++)
	{
		if(p[i] == '+') 
		{
			std::cout << p[i - 1] << " PLUS " << p[i + 1] << " EQUALS " << p[i - 1] + p[i+1];
		}
	}

	return 0;
}
