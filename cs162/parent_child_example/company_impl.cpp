#include "company.h"

company::company(){
 company_name = "";
 company_location = "";
}

company::company(string cname){
 company_name = cname;
}

company::company(string cname, 
	string clocation){
 company_name = cname;
 company_location = clocation;
}

void company::set_cmp_name(string cname){
  company_name = cname;
}

void company::set_cmp_location(string clocation){
 company_location = clocation;
}

string company::get_cmp_name(){
 return company_name;
}

string company::get_cmp_location(){
 return company_location;
}

void company::print(){
 cout<<"Inside company print function"<<endl;
 cout<<"Company Name = "<<company_name<<endl;
 cout<<"Company Location = "<<company_location<<endl;
}