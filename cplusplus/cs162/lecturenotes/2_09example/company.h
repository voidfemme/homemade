#pragma once	//"pragma" tells the compiler to compile 
		//it only once.
#include <iostream>
#include<string>
using namespace std;

class company{

	private:
		string company_name;
		string company_location;

	public:
		company();
		company(string);
		company(string,string);

		void print();
};
