#include "house.h"

int main(){
	house new_house("Portland",3,2018);
	house* ptr_to_house = nullptr;
	ptr_to_house = &new_house;

	ptr_to_house-> print_house_details();
	return 0;
}
