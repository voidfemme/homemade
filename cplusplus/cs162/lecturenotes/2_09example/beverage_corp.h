#include "company.h"

class beverage_corp:company{	// the colon signifies that
				// beverage_corp is a child
				// of company.
	
	private:
		string beverage_cmp_nm;

	public:
		beverage_corp();
		beverage_corp(string);

		void set_bev_corp_nm(string);
		string get_bev_corp_nm();

		void print_bev_corp_info();


};
