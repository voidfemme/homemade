#include <iostream>
#include <iomanip>

using namespace std;

void FormatFun(){
	cout << setw(90) << setfill('-') << "" << endl;
	cout << setfill(' ');
}

void Print(int *a, int *b, int& x, int& y){
// a,b,x,y
	FormatFun();
	cout << "variable |" << setw(5) << "a" << setw(20) << "b" <<setw(20) <<  "x" <<setw(20) <<  "y" << endl;
	FormatFun();
	cout << "norm     |" << setw(5) << a << setw(20) << b << setw(20) << x << setw(20) << y << endl;
	FormatFun();
	cout << "&        |" << setw(5) << &a << setw(20) << &b << setw(20) << &x << setw(20) << &y << endl;
	FormatFun();
	cout << "*        |" << setw(5) << *a << setw(20) << *b << setw(20) << "n/a" << setw(20) << "n/a" << endl;
	FormatFun();
}

int main(){

	int* a = nullptr;
	int* b = nullptr;

	int x = 12;
	int y = 13;
	y* = &x;
	x* = &y;


	Print(a,b,x,y);


	return 0;
}
