#include "airplane.h"
#include "plane_engine.h"

plane_engine::plane_engine(){
	engine_weight = 0;
	engine_heat_tolerance = 0;
}

plane_engine::plane_engine
  (string mfr, string mdl, int miles,
  	int eng_wt, int eng_ht_tlr)
{
  manufacturer = mfr;
  model = mdl;
  mileage = miles;
  engine_weight = eng_wt;
  engine_heat_tolerance = eng_ht_tlr;
}

void plane_engine::set_engine_weight(int weight){
	engine_weight = weight;
}
void plane_engine::set_engine_heat_tolerance(int heat_tolerance){
	engine_heat_tolerance = heat_tolerance;
}

int plane_engine::get_engine_weight(){
	return engine_weight;
}
int plane_engine::get_engine_heat_tolerance(){
	return engine_heat_tolerance;
}

void plane_engine::print_data(){
 cout<<"Airplane manufacturer = "
     <<manufacturer<<endl;
 cout<<"Airplane model = "<<model<<endl;
 cout<<"Airplane mileage = "
     <<mileage<<endl;
 cout<<"Airplane engine weight = "
     <<engine_weight<<endl;
 cout<<"Airplane engine heat tolerance = "
     <<engine_heat_tolerance<<endl;
}
