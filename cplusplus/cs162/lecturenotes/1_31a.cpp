#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout<<setw(55)<<setfill('-')<<""<<endl;
}

void pointer_fun(int* x, int*y){

	format_fun();
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	format_fun();

	x = y;

	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}

int main(){

	int* p = nullptr;
	int* q = nullptr;

	int a = 2;
	int b = 3;

	p = &a;
	q = &b;

	format_fun();
	cout<<"Passing pointers as function parameters example"<<endl;
	format_fun();

	cout<<"p = "<<p<<endl;
	cout<<"q = "<<q<<endl;

	pointer_fun(p,q);

	format_fun();
	

	return 0;
}


char first_char = 'n';
char* first_ptr = &first_char;
int first_int = 21;
int* secondptr = &first_int;
