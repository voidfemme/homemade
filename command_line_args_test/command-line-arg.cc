#include <iostream>
#include <stdio.h>
#include <iomanip>

// From https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
// argc = ARGument Count
// 	type = int
// 	- stores number of command line arguments passed by the user, INCLUDING THE NAME OF THE PROGRAM
// 	- the value of argc should be non-negative
// argv = ARGument Vector
// 	- an array of character pointers listing all the arguments
// 	- if argc is greater than zero, ther array elements from argv[0] to argv[argc - 1] will
// 	  contain pointers to strings
// 	- Argv[0] is the name of the program, After that till argv[argc - 1] will contain pointers
// 	  to strings.

// Note : Other platform-dependent formats are also allowed by the C and C++ standards; for example,
// 	  Unix (though not POSIX.1) and Microsoft Visual C++ have a third argument giving the 
// 	  program’s environment, otherwise accessible through getenv in stdlib.h: Refer C program 
// 	  to print environment variables for details.

void FormatFun(){
	std::cout << std::setw(56) << std::setfill('~') << " " << std::endl;
}

int main(int argc, char **argv){
	// std::cout << "You have entered: " << argc << " arguments:" << std::endl;

	// for (int i=0; i<argc; i++){
	// 	std::cout << argv[i] << std::endl;
	// }
	
	int counter;
	FormatFun();
	std::printf("Program Name Is: %s",argv[0]);
	std::cout << std::endl;
	FormatFun();
	if(argc==1){
		std::printf("No Extra Command Line Argument Passed Other Than Program");
	}
	if(argc>=2){
		std::printf("\nNumber of Arguments Passed: %d",argc);
		std::cout << std::endl;
		FormatFun();
		std::printf("\n----Following Are The Command Line Arguments Passed----\n");
			for(counter=0;counter<argc;counter++){
				std::printf("\nargv[%d]: %s",counter,argv[counter]);
			}
			std::cout << std::endl;
	}
	std::cout << std::endl;
	FormatFun();
	return 0;
}

// Output:
// 	$ ./main geeks for geeks
// 	You have entered 4 arguments:
// 	./main
// 	geeks
// 	for
// 	geeks
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~~~ Properties of Command Line Arguments:
//
// 1. They are passed to main() function
// 2. They are parameters/arguments supplied to the program when it is invoked
// 3. They are used to control the program from outside instead of hard coding
// 	those values inside the code
// 4. argv[argc] is a NULL pointer
// 5. argv[0] holds the name of the program
// 6. argv[1] points to the first command line argument and argv[n] points last argument

// Note : You pass all the command line arguments separated by a space, but if argument itself
// 	  has a space then you can pass such arguments by putting them inside double quotes ""
// 	  or single quotes ''
