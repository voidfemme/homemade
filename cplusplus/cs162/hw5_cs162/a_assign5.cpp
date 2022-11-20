#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(40) << setfill('-') << "" << endl;
}

struct employee{
	string emp_name;
	int emp_id;
	string emp_group;
};

void init_ee_employee(employee* ee_ptr){
	cout << "Enter Engineering Employee Name: ";
	cin >> (*ee_ptr).emp_name;
	cout << "Enter Engineering Employee ID: ";
	cin >> (*ee_ptr).emp_id;
	cout << "Enter Engineering Employee Group: ";
	cin >> (*ee_ptr).emp_group;
	format_fun();
	//Write the body of the init_ee_employee function
}

void init_mgr_employee(employee* mgr_ptr){
	cout << "Enter Manager Employee Name: ";
	cin >> mgr_ptr-> emp_name;
	cout << "Enter Manager Employee ID: ";
	cin >> mgr_ptr-> emp_id;
	cout << "Enter Manager Employee Group: ";
	cin >> mgr_ptr-> emp_group;
	format_fun();
	// Write the body of the init_mgr_employee function
}

int main(){
	employee *ee_emp = nullptr;
	employee *mgr_emp = nullptr;

	employee engineer;
	employee general_manager;

	ee_emp = &engineer;
	mgr_emp = &general_manager;

	init_ee_employee(ee_emp);
	init_mgr_employee(mgr_emp);
	
	cout << "Saved Employee Data:" << endl;
	format_fun();

	cout << "Engineering Employee Name: " << engineer.emp_name << endl;
	cout << "Engineering Employee ID: " << engineer.emp_id << endl;
	cout << "Engineering Employee Group: " << engineer.emp_group << endl;
	format_fun();

	cout << "Engineering Employee Name: " << general_manager.emp_name << endl;
	cout << "Engineering Employee ID: " << general_manager.emp_id << endl;
	cout << "Engineering Employee Group: " << general_manager.emp_group << endl;
	format_fun();

	return 0;
}

//************************************************************************

// Print the contents of the engineering employee's details. Your output should be of the form:
//	Engineering Employee Name = Josh
//	Engineering Employee ID = 100
//	Engineering Employee Group = Software
//
// Print the contents of the General Manager employee's details. Your output should be of the form:
//	Engineering Employee Name = Tom
//	Engineering Employee ID = 101
//	Engineering Employee Group = Management
//
