#include "company.h"


class beverage_corp:public company{
 
 private:
  string beverage_type;

 public:
  beverage_corp();
  beverage_corp(string);
  beverage_corp(string, string, string);
  
  void set_beverage_type(string);
  string get_beverage_type();

  void print();


};