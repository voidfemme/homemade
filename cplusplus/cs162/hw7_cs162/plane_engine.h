#include "airplane.h"

class plane_engine: public airplane{

private:
 	int engine_weight;
 	int engine_heat_tolerance;

public: 
	plane_engine();
	plane_engine(string,string,int,int, int);
	
	void set_engine_weight(int);
	void set_engine_heat_tolerance(int);
	int get_engine_weight();
	int get_engine_heat_tolerance();
	
	                  
	void print_data();

};

