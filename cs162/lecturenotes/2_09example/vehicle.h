#pragma once	
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class vehicle{

	private:
		string model_name;
		string color;
		string model_make;
		string fuel_type;
		int model_year;
		int odometer_reading;
		string transmission_type;
		string engine_hp;
		string engine_type;

	public:
		vehicle();
		vehicle(string,string)
		vehicle(string,string,string,int int,string,string,string);

		void print();
};
