#include "beverage_corp.h"

beverage_corp::beverage_corp(){
 beverage_type = "";
}

beverage_corp::beverage_corp
 (string bev_type){
 beverage_type = bev_type;
}

beverage_corp::beverage_corp(string cname,
	string cloc, string bev_type){
  company_name = cname;
  company_location = cloc;
  beverage_type = bev_type;
}

void beverage_corp::set_beverage_type
 (string bev_type){
	beverage_type = bev_type;
}

string beverage_corp::get_beverage_type(){
 return beverage_type;
}

void beverage_corp::print(){
 cout<<"Inside beverage print function"<<endl;
 cout<<"Beverage Company Name = "
     <<company_name<<endl;
 cout<<"Beverage Company Location = "
     <<company_location<<endl;

 cout<<"Type of beverage offered = "
     <<beverage_type<<endl;
}