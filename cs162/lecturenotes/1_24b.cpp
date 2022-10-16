#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct faculty{
	string faculty_name;
	int faculty_id;
};

/* we return x which is type int
int update_integer(int x){
	x = 212;
	return x;
}*/

// similarly, we return f, which is type faculty
faculty populate_faculty_info(faculty f){

	cout<<"Enter faculty name: ";
	cin>>f.faculty_name;

	cout<<"Enter faculty ID: ";
	cin>>f.faculty_id;

	return f;

}

int main(){
	
	faculty new_faculty;

	new_faculty = {

		cout<<"Enter faculty name: ";
		cin>>new_faculty.faculty_name;
		cout<<"Enter faculty ID: ";
		cin>>new_faculty.faculty_id;
	}


	return 0;
}
