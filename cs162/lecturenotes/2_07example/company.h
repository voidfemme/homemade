#include <iostream>
#include <string>
using namespace std;

// This file is called a header file because it is the "header" 
// of the program.

// First, we instantiate a class
class company{
	// Now we determine which attributes of this class
	// are externally accessible 
	// I'm not 100% sure on the actual specifics of the 
	// difference between private and public attributes)
	// it has something to do with allowing external
	// programs to set the values of each variable?

	private:
		string company_name;
		string company_location;
	public:
		company();
		company(string);
		company(string,string);
		void company_printer();
	/* here, you can see that each one of these constructors
	 * has the same name because we're overloading functions
	 * This essentially tells the computer to call whichever
	 * function has arguments that match in type and in 
	 * number of variables which version of "company()" to
	 * call.
	*/

};
