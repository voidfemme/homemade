#include "vehicle.h"

vehicle::vehicle(){
	model_name = "";
	model_make = "";
	color = "";
	model_year = 0;
	odometer_reading = 0;
	transmission_type = "";
	engine_horse_power = "";
	engine_type = "";
}


vehicle::vehicle(string model_nm, string model_mk){
	model_name = "";
	model_make = "";
}


vehicle::vehicle(string model_nm, string model_mk, string vcolor
		/*etc...*/){
	model_name = model_nm;
	model_make = model_mk;
	color = vcolor;
	model_year = 0;
	odometer_reading = 0;
	transmission_type = "";
	engine_horse_power = "";
	engine_type = "";
}

void vehicle::print(){
	cout << "Model Name = " << model_name << endl;
	cout << "Model Make = " << model_make << endl;
	cout << "Model Color = " << color << endl;
	// etc...
}
