#include "company.h"
#include <iomanip>

void format_fun(){
	cout << setw(45) << setfill('-') << "" << endl;
}

int main(){

	format_fun();
	cout << "OOP Example" << endl;
	format_fun();

	company* tech_cmp_ptr = nullptr;
	//pointer to a datatype company


	company tech_cmp("Microsoft","Redmond");
	company biotech_cmp("Stryker");
	company pharma_cmp("Merck","Vermont");
	// instantiate multiple variables of type, "company" 


	tech_cmp_ptr = &tech_cmp;
	// point "tech_cmp_ptr" at the address of "tech_cmp"
	
	(*tech_cmp_ptr).company_printer();
	/* These parens surround "*tech_cmp_ptr" because "company_printer()"
	 * won't accept a pointer as a datatype unless we do so. I didn't
	 * quite understand his explanation for this either.
	 *
	 * Alternatively, this could be written:
	tech_cmp_ptr->company_printer();
	*/

	format_fun();
	return 0;
}
