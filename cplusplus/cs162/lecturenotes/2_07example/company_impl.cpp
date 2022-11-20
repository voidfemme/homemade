#include "company.h"

// A temptation when learning a new concept is to associate things
// with preconceptions, rather than having an open mind and
// realizing that some things are completely outside your realm of
// experience. Sometimes it's just better to accept new concepts 
// on their own terms, at face value

/* so here we use the :: operator, called a "scope resolution
 * operator" to allow the compiler to know that we are trying to
 * access a class's static variables. The variables in the .h
 * file.
*/

/*The below functions are the functions we constructed 
 * in "header.h"
*/

company::company(){
	company_name = "";
	company_location = "";
}

company::company(string cname){
	company_name = cname;
	company_location = "";
}

company::company(string cname, string cloc){
	company_name = cname;
	company_location = cloc;
}

void company::company_printer(){
	cout << "Company Name = " << company_name << endl;
	cout << "Company Location = " << company_location << endl;
}
