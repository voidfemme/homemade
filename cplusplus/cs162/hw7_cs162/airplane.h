#pragma once 
#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;

class airplane{ 

protected:
 string manufacturer;
 string model;
 int mileage;

public: 
 airplane();
 airplane(string,string,int);

 void set_airplane_manufacturer(string);
 void set_airplane_model(string);
 void set_airplane_mileage(int);

 string get_airplane_manufacturer();
 string get_airplane_model();
 int get_airplane_mileage();

 // what is the virtual keyword?
 virtual void print_data();

};
