#include "beverage_corp.h"
#include "company.h"
#include <iomanip>

void format_fun(){
	cout << setw(45) << setfill('-') << "" << endl;
}

int main(){

	company* c;
	beverage_corp b;

	c = &b;
	c->print();

	format_fun();
	cout << "OOP Example" << endl;
	format_fun();

	company* tech_company = nullptr;
	company techie ("Intel","Santa Clara");
	beverage_corp bev_cmp("Coke");
	
	tech_company = &techie;
	tech_company->print();
	
	bev_cmpp.print();

	format_fun();
	
	return 0;
}


/*
 * company* c;
 * beverage_corp b;
 *
 * c = &b;
 * c -> print();
 */
