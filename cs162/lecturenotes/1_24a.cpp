#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout<<setw(45)<<setfill('-')<<""<<endl;
}

int main(){
	format_fun();
	cout<<"Pointer Fun Example"<<endl;
	format_fun();

	// So what does nullptr mean?
	int* p = nullptr;
	cout<<"   int* p = nullptr;"<<endl;
	cout<<"p = "<<p<<endl;
	format_fun();

	p = new int;
	cout<<"   p = new int;"<<endl;
	cout<<"p = "<<p<<endl;
	format_fun();

	*p = 42;
	cout<<"   *p = 42"<<endl;
	cout<<"Value inside new memory location = "<<*p<<endl;
	format_fun();

	return 0;
}
