#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct car{
	int num_of_tires;
	double odometer_reading;
};

void format_fun(){
	cout << setw(35) << setfill('-') << "" << endl;
}

void populate_struct_fun(car ocar){
	cout << "Enter number of tires: ";
	cin >> ocar.num_of_tires;

	cout << "Enter odometer reading: ";
	cin >> ocar.odometer_reading;
}

void print_struct(car ocar){
	cout << "Number of tires = " << ocar.num_of_tires << endl;
	cout << "

int main(){
	car new_car;
	car old_car;

	format_fun();
	cout << "Struct Review" << endl;
	format_fun();

	populate_struct_fun(old_car);
	print_struct(old_car);

	new_car.num_of_tires = 4;
	new_car.odometer_reading = 22.89;

	cout << "Number of tires = " << new_car.num_of_tires << endl;
	cout << "Number of miles = " << new_car.odometer_reading << endl;
	
	return 0;
}
