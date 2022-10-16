#include "student.h"

student::student(){
	first_name = "";
	student_id = 0;
	student_gpa = 0.0;
}

student::student(string sname, int sid, double sgpa){
	first_name = sname;
	student_id = sid;
	student_gpa = sgpa;
}

void student::set_student_name(string sname){
	first_name = sname;
}

string student::get_student_name(){
	return first_name;
}

void student::set_student_id(int sid){
	student_id = sid;
}

int student::get_student_id(){
	return student_id;
}

void student::set_student_gpa(double sgpa){
	student_gpa = sgpa;
}

double student::get_student_gpa(){
	return student_gpa;
}

void student::print_student_data(){
	cout << "Student Name = " << first_name << endl;
	cout << "Student ID = " << student_id << endl;
	cout << "Student GPA = " << student_gpa << endl;
}
