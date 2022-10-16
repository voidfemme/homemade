#include "CLI11.hpp"

int main(int argc, char **argv){
	// the `CLI::App` object is the basis of all interactions in the library
	CLI::App app;

	// Add new options/flags here
	
	CLI11_PARSE(app, argc, argv);
	// this is a *macro* that runs five simple lines. Internally: `app.parse(argc, argv)`, which takes the command line info from C++ and parses it. If there is an error, it throws a `ParseError`; if you catch it, you can use `app.exit` with the error as an argument to print a nice message and produce the correct return code for your application.
	
	bool my_flag{false};
	app.add_flag("-f", my_flag, "Optional Description");
	// This will bind the flag `-f` to the boolean `my_flag`. After the pasing step, `my_flag` will be `false` if the flag was not found on the command line or `true` if it was. By default, it will be allowed any number of times, but if you explicitly request:
	// 	`_>take_last(false)`, it will only be allowed once; passing something like `./myapp -f -f` or `./myapp -ff` will throw a `ParseError` with a nice help description.
	

	return 0;
}
