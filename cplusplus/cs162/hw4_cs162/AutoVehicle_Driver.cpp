#include "AutoVehicle.h"
#include <iomanip>

void format_fun(){
	cout << setw(30) << setfill('-') << "" << endl;
}

int main(){

	format_fun();
	cout << "CS 162 Lab Assignment 4 :P" << endl;
	format_fun();

	string av_color;
	string av_type;
	string av_model;
	int av_mileage;
	int av_num_tires;
	int av_model_year;

	AutoVehicle roses_car("red","pickup","Silverado",1999);
	AutoVehicle default_car;
	AutoVehicle assignment_example("Blue","electric","Prius",5000,4,2020);

	cout << "Rose's Car:" << endl;
	format_fun();
	roses_car.print();
	format_fun();

	cout << "Default Car:" << endl;
	format_fun();
	default_car.print();
	format_fun();

	cout << "Homework 4 Output:" << endl;
	format_fun();
	assignment_example.print();
	format_fun();

	cout << "Toodles!" << endl;


}
