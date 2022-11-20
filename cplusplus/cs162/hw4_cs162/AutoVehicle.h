//AutoVehicle.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class AutoVehicle{
	private:
		string av_color;
		string av_type;
		string av_model;
		int av_mileage;
		int av_num_tires;
		int av_model_year;
	public:
		AutoVehicle();
		AutoVehicle(string color,string type,string model,int model_year);
		AutoVehicle(string color,string type,string model,int mileage, int num_tires,int model_year);
		
		void setVehicleColor(string color);
		void setVehicleType(string type);
		void setVehicleModel(string model);
		void setVehicleMileage(int mileage);
		void setVehicleNumTires(int num_tires);
		void setVehicleModelYear(int year);

		string getVehicleColor();
		string getVehicleType();
		string getVehicleModel();
		int getVehicleMileage();
		int getVehicleNumTires();
		int getVehicleModelYear();

		void print();
};
