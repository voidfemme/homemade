#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(15) << setfill('-') << "" << endl;
}

int getAnswer(int* c01, int* c02){
	//return the sum of the values that c01 and c02 are pointing at
	int sum = 0;
	sum = *c01 + *c02; 
	return sum;
}

int* getSecondAnswer(int* &c01, int* &c02){
	//assign c01 to c02;
	c01 = c02;
	//return c01;
	return c01;
}

int main(){
	int *p = nullptr;
	int *q = nullptr;
	int x = 5;
	int y = 6;
	int a = 11;
	int b = 12;
	p = &x;
	// "p equals the address of x"
	q = &y;
	// "q equals the address of y"
	int answer = getAnswer(p,q);
	cout << "answer = " << answer << endl;
	format_fun();
	p = &a;
	q = &b;

	int* result = getSecondAnswer(p,q);
	cout << "*result = " << *result << endl;
	format_fun();

	return 0;
}
