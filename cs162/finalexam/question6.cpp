#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(50) << setfill('-') << "" << endl;
}

void populate_p(vector <int> &v){
	int input;
	cout << "Enter 5 numbers, separated by a space: ";
	for(int i=0;i<5;i++){
		cin >> input;
		v.push_back(input);
	}
	cout << endl;
}

void print_p(vector <int> v){
	for(int i=0;i<5;i++){
		cout << v.at(i) << " ";
	}
}

int main(){
	vector <int> p;
	format_fun();

	populate_p(p);
	format_fun();
	cout << "Vector values: ";
	print_p(p);
	cout << endl;
	format_fun();

	return 0;
}
