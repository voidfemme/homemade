#include <cstdio>
int main(int argc, char **argv)
{
	int d = 2;
	std::printf("Welcome to a program with a bug!\n");

	std::scanf("%d", d);

	std::printf("You gave me: %d", d);
	return 0;
}

// in order to use gdb, I'll want to compile my program with debug
// 	info available. In order to do this, you just tack on "-g"
// 	when compiling with g++

// "lay next" in gdb will take me to the screen where I can see the
// source code next to the assembly code.
//
// "break <function name>" will create a breakpoint at the given function.
//
// "next" will increment your position in the c++ code to the next line.
// 	Since one line of c++ can translate to many lines of assembly,
// 	"next" will skip several lines down assembly to the corresponding
// 	position in the source code.
//
// "nexti" will increment my position in the assembly code.
