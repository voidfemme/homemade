/* The goal of this file is to:
 * 	1. create variables "sophomore" and "Senior" of type student.
 * 	2. 'set_student_gpa' "sophomore" = 4.0
 * 	3. set_student_id "senior" = 103
 * 	4. print_student_data "senior" "sophomore"
 */

#include "student.h"
#include <iomanip>

void format_fun(){
	cout << setw(45) << setfill('-') << "" << endl;
}

int main(){

	format_fun();
	cout << "CS 162 Midterm Exam - Rose Proctor" << endl;
	format_fun();

	string first_name;
	int student_id;
	double student_gpa;

	student* generic_student = nullptr;
	student sophomore("Jane",101,3.9);
	student senior("Alison",102,3.7);

	cout << "sophomore data before:" << endl;
	format_fun();
	sophomore.print_student_data();
	format_fun();

	cout << "senior data before:" << endl;
	format_fun();
	senior.print_student_data();
	format_fun();
	
	sophomore.set_student_gpa(4.0);
	senior.set_student_id(103);

	cout << "sophomore data after:" << endl;
	format_fun();
	sophomore.print_student_data();
	format_fun();

	cout << "senior data after:" << endl;
	format_fun();
	senior.print_student_data();
	format_fun();


	return 0;
}
