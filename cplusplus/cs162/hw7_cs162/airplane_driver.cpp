#include "plane_engine.h"
#include "airplane.h"
#include <iomanip>

int main (){
	airplane airplane_model("Boeing", "737", 15000);
	plane_engine airplane_engine = plane_engine("Airbus","A320",2000,150,225);
	airplane* airplane_ptr;
	airplane_ptr = &airplane_engine;
	
	airplane_ptr-> print_data();
	airplane_model.print_data();

	return 0;
}
