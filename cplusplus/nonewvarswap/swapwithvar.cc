#include <iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int x = 0;

	cout << "a: ";
	cin >> a; // = 1

	cout << "b: ";
	cin >> b; // = 8

	a = b; // a = 8
	b = a; // b = 8
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
	
}
