#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(40) << setfill('-') << "" << endl;
}

struct building{
	string building_type;
	string building_location;
	int number_of_floors;
	
	void setNumberOfFloors(int floors){
	number_of_floors = floors;
	}

	int getNumberOfFloors(){
		return number_of_floors;
	}
};

void init_apartment_complex(building* apt_comp_ptr){
	cout << "Enter Building Type: ";
	cin >> apt_comp_ptr-> building_type;
	cout << "Enter Building Location: ";
	cin >> apt_comp_ptr-> building_location;
	apt_comp_ptr-> setNumberOfFloors(5);
	format_fun();
}

void print_building(building* apt_comp_ptr){
	cout << "Building Type = " << (*apt_comp_ptr).building_type << endl;
	cout << "Building Location = " << (*apt_comp_ptr).building_location << endl;
	cout << "Number of Floors = " << apt_comp_ptr->getNumberOfFloors() << endl;
}

int main(){
	building *apartment_complex = nullptr;
	building high_rise;
	apartment_complex = &high_rise;

	init_apartment_complex(apartment_complex);
	print_building(apartment_complex);
}
