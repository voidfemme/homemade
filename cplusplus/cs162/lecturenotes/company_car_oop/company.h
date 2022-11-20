//company.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class company{
	private:
		string company_name;
		string company_location;
	public:
		company();
		company(string);
		company(string,string);
		
		void set_cmp_name(string);
		void set_cmp_location(string);

		string get_cmp_name();
		string get_cmp_location();

		void print();

};
