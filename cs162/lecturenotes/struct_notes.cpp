#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void format_fun(){
	cout << setw(35) << setfill('-') << "" << endl;
}


struct employee{
	string emp_name;
	int emp_id;
};


void populate_emp(employee& gen_emp){
	format_fun();
	cout << "Enter employee name: ";
	cin >> gen_emp.emp_name;
	
	format_fun();
	cout << "Enter employee id: ";
	cin >> gen_emp.emp_id;
}


void print_emp(employee gen_emp){
	format_fun();
	cout << "Employee Name = " << gen_emp.emp_name;
	cout << "\nEmployee ID = " << gen_emp.emp_id << endl;
	format_fun();

}

int main(){

	employee new_emp;
	employee software_eng;

	format_fun();
	cout << "Employee Program" << endl;

	populate_emp(software_eng);
	print_emp(software_eng);

	populate_emp(new_emp);
	print_emp(new_emp);

	new_emp.emp_name = "jane";
	new_emp.emp_id = 101;

	cout << "New Employee Name = " << new_emp.emp_name << endl;
	cout << "New Employee ID = " << new_emp.emp_id << endl;

	format_fun();

	return 0;

}
