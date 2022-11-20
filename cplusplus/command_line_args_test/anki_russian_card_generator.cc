#include <iostream>
#include <stdio.h>
#include <iomanip>

void FormatFun()
{
	std::cout << std::setw(56) << std::setfill('~') << " " << std::endl;
}

int main(int argc, char** argv)
{
	int counter;
	FormatFun();
	std::printf("Program name is: %s", argv[0]);
	std::cout << std::endl;
	FormatFun();
	if(argc == 1)
	{
		std::printf("\nNMumber of Arguments Passed: %d", argc);
		std::cout << std::endl;
		FormatFun();
		std::printf("\n----Following Are the command line Arguments Passed----\n");
		for(counter=0;counter<argc;counter++)
		{
			std::printf("\nargv[%d]: %s", counter, argv[counter]);
		}
	}
	std::cout << std::endl;
	FormatFun();
	return 0;
}

// I want to find a way to bind lines of code and snippets to keyboard shortcuts in vim
