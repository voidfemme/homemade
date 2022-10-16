#include <iostream>
#include <iomanip>
using namespace std;

//-------------------------------------------

void format_fun(){
	cout<<setw(45)<<setfill('-')<<""<<endl;
}

//-------------------------------------------

void set_variable_values(int& value_1,int& value_2){

	cout<<"Enter first number: ";
	cin>>value_1;
	
	format_fun();
	
	cout<<"Enter second number: ";
	cin>>value_2;

}

//-------------------------------------------

//this is a pass by value example
void pointer_param(int* p){
	cout<<"p = "<<p<<endl;
	// p is @ 10000 and contains 11011 
	// first_number @ 11011, and contains 10

	//return p;

}

//-------------------------------------------

void print_function(int value_1, int value_2){
	cout<<"First number = "<<value_1<<endl;
	format_fun();
	cout<<"Second number = "<<value_2<<endl;
}

//-------------------------------------------

int main(){

	//-----------------------------------
	int* p = nullptr;
	int* q = nullptr;
	// note: nullptr is address 0x0000... 

	int first_number = 0;
	int second_number = 0;
	//------------------------------------

	format_fun();
	cout<<"Pointer Function Example"<<endl;
	format_fun();

	set_variable_values(first_number,second_number);
	format_fun();
	print_function(first_number,second_number);
	format_fun();
	
	//------------------------------------

	p = &first_number;
	q = &second_number;

	cout<<"*p = "<<*p<<endl;	//prints the value of first_number
	cout<<"*q = "<<*q<<endl;
	
	//------------------------------------
	
	pointer_param(p);
	
	format_fun();

	return 0;
}

// Technically, could I hard-code the address of a variable?
// so that 
// 	int &x = 0x33f3877a8
//
// 	Neural networks use nodes and weights of relationships
// 	in order to create a statistical model.
// 	Why do we say that neural networks are "black box" programs?
