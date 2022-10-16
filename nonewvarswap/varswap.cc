#include <iostream>
#include <iomanip>
using namespace std;

void FormatFun(){
	cout << setw(60) << setfill('-') << " " << endl;
}
int main(){
	int a = 0;
	int b = 0;
	bool stop = true;

	cout << "a = " << a << "; b = " << b << endl;

	while(true){
		cout << "enter int values separated by a space (equal values terminate the program): ";
		cin >> a;
		cin >> b;

		cout << "some stats: " << endl;
		cout << "     a + b = " << a + b << endl;
		cout << "     a - b = " << a - b << endl;
		FormatFun();

		// Swap them here without using a third variable
		if(a>b){
		}
		else if(b>a){
		}
		else{
			FormatFun();
			cout << "sentinel values received, terminating..." << endl;
			break;
		}

		cout << "     a now = " << a << ", and b is now = " << b << endl;
		FormatFun();
	}

	return 0;
}
