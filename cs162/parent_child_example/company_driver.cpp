#include "company.h"
#include "beverage_corp.h"
#include <iomanip>

void format_fun(){
 cout<<setw(45)<<setfill('-')<<""<<endl;
}

int main(){

 format_fun();
 cout<<"OOP Example"<<endl;
 format_fun();
 
 //--------------------------
 string company_name;
 string company_location;
 
 //-------------------------------
 cout<<"Enter company name: ";
 cin>>company_name;
 
 format_fun();

 cout<<"Enter company location: ";
 cin>>company_location;

 format_fun();
 
 //------------------------------
 company* generic_company = nullptr;
 company techie ("Intel", "Santa Clara");
 
 
 //--------------------------------
 int* x = nullptr;
 int y = 12;
 x = &y;
 cout<<"Value inside what x is pointing at: "<<*x<<endl;
 format_fun();
 //-------------------------------

 cout<<"Original Company Name and Location"<<endl;
 format_fun();
 techie.print();
 format_fun();

 techie.set_cmp_name(company_name);
 techie.set_cmp_location(company_location);
 
 cout<<"Updated Company Name and Location"<<endl;
 format_fun();

 //------------------------------------------
 cout<<"Updated Code"<<endl;
 format_fun();
 //-------------------------------------------
 beverage_corp bev_corp("Pepsi", "Denver", "Sodas");
 generic_company = &bev_corp;

 generic_company->print();
 format_fun();
 
 //--------------------------------------------

 

 return 0;

}


//techie.print();
 //format_fun();