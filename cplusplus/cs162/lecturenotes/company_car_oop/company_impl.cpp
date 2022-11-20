#include "company.h"

company::company(){
	company_name = "";
	company_location = "";
}

company::company(string cname){
	company_name = cname;
}

company::company(string cname, string clocation){
	company_name = cname;
	company_location = clocation;
}

void company::print(){
	cout << "Company name = " << company_name << endl;
	cout << "Company Location = " << company_location << endl;
}
