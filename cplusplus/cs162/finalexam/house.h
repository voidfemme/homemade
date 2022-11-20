#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class house{
	private:
		string location;
		int num_of_rooms;
		int year_built;

	public:
		house();
		house(string,int,int);

		void set_location(string);
		string get_location();

		void set_num_of_rooms(int);
		int get_num_of_rooms();

		void set_year_built(int);
		int get_year_built();
		
		void print_house_details();
};
