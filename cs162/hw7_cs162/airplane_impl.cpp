#include "airplane.h"

airplane::airplane(){
	manufacturer = "";
	model = "";
	mileage = 0;
}

airplane::airplane(string mfr, string mdl, int miles){
  manufacturer = mfr;
  model = mdl;
  mileage = miles;
}

void airplane::set_airplane_manufacturer(string p_manufacturer){
	manufacturer = p_manufacturer;
}
void airplane::set_airplane_model(string p_model){
	model = p_model;
}
void airplane::set_airplane_mileage(int p_mileage){
	mileage = p_mileage;
}

string airplane::get_airplane_manufacturer(){
	return manufacturer;
}
string airplane::get_airplane_model(){
	return model;
}
int airplane::get_airplane_mileage(){
	return mileage;
}

void airplane::print_data(){
 cout<<"Airplane manufacturer = "<<manufacturer<<endl;
 cout<<"Airplane model = "<<model<<endl;
 cout<<"Airplane mileage = "<<mileage<<endl;
}
