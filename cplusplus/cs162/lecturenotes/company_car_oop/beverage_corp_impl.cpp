#include "beverage_corp.h"

beverage_corp::beverage_corp(){
	beverage_cmp_nm = "";
}

beverage_corp::beverage_corp(string bev_cmp_nm){
	beverage_cmp_nm = bev_cmp_nm;
}

beverage_corp::set_bev_corp_nm(string bev_cmp_nm){
	beverage_cmp_nm = bev_cmp_nm;
}

string beverage_corp::get_bev_corp_nm(){
	return beverage_cmp_nm;
}

void beverage_corp::print(){
	cout << "Beverage Company Name = "
}

}
