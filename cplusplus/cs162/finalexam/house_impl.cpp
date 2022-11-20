#include "house.h"

house::house(){
	location = "Unset";
	num_of_rooms = 0;
	year_built = 0;
}

house::house(string h_location,int h_num_of_rooms,int h_year_built){
	location = h_location;
	num_of_rooms = h_num_of_rooms;
	year_built = h_year_built;
}

void house::set_location(string h_location){
	location = h_location;
}

string house::get_location(){
	return location;
}

void house::set_num_of_rooms(int h_num_of_rooms){
	num_of_rooms = h_num_of_rooms;
}

int house::get_num_of_rooms(){
	return num_of_rooms;
}

void house::set_year_built(int h_year_built){
	year_built = h_year_built;
}

int house::get_year_built(){
	return year_built;
}

void house::print_house_details(){
	cout << "Location: " << location << endl;
	cout << "# of rooms: " << num_of_rooms << endl;
	cout << "Year Built: " << year_built << endl;

}
