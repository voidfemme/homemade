#include "AutoVehicle.h"

// implement functions defined in the header file:

AutoVehicle::AutoVehicle(){
	av_color = "";
	av_type = "";
	av_model = "";
	av_mileage = 0;
	av_num_tires = 0;
	av_model_year = 0;
}

// the following two are examples of function overloading
AutoVehicle::AutoVehicle(string color, string type,string model,int model_year){
	av_color = color;
	av_type = type;
	av_model = model;
	av_model_year = model_year;
}

AutoVehicle::AutoVehicle(string color,string type,string model, int mileage,int num_tires,int model_year){
	av_color = color;
	av_type = type;
	av_model = model;
	av_mileage = mileage;
	av_num_tires = num_tires;
	av_model_year = model_year;
}

// Setters
void AutoVehicle::setVehicleType(string type){
	av_type = type;
}
void AutoVehicle::setVehicleModel(string model){
	av_model = model;
}
void AutoVehicle::setVehicleMileage(int mileage){
	av_mileage = mileage;
}
void AutoVehicle::setVehicleNumTires(int num_tires){
	av_num_tires = num_tires;
}
void AutoVehicle::setVehicleModelYear(int year){
	av_model_year = year;
}

// Getters
string AutoVehicle::getVehicleColor(){
	return av_color;
}
string AutoVehicle::getVehicleType(){
	return av_type;
}
string AutoVehicle::getVehicleModel(){
	return av_model;
}
int AutoVehicle::getVehicleMileage(){
	return av_mileage;
}
int AutoVehicle::getVehicleNumTires(){
	return av_num_tires;
}
int AutoVehicle::getVehicleModelYear(){
	return av_model_year;
}

void AutoVehicle::print(){
	cout << "Vehicle Color      = " << av_color << endl;
	cout << "Vehicle Type       = " << av_type << endl;
	cout << "Vehicle Model      = " << av_model << endl;
	cout << "Vehicle Mileage    = " << av_mileage << endl;
	cout << "Vehicle num_tires  = " << av_num_tires << endl;
	cout << "Vehicle model_year = " << av_model_year << endl;
};
