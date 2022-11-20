#include <iostream>
#include <iomanip>
using namespace std;

void FormatFun(int width){
	cout << setw(width) << setfill('-') << " " << endl;
}
int main(){
	int x = 0;
	int y = 0;
	bool stop = true;
	char fill_char;

	while(true){
		FormatFun(60);
		cout << "syntax: <value a> <value b>" << endl;
		cout << " >> ";
		cin >> x;
		cin >> y;
		if(x==y){
			cout << "termination signal recieved. Quitting." << endl;
			break;
		}
		FormatFun(14);
		cout << " You entered: " << endl;
		cout << " x = " << x << endl;
		cout << " y = " << y << endl;
		FormatFun(14);

		if(x > y){
			FormatFun(14);
			cout << " x > y " << endl;
			cout << " x - y = " << x - y << endl;
			cout << " y - x = " << y - x << endl;
			cout << " y * x = " << y * x << endl; 
			FormatFun(14);
		}
		// Swap them here without using a third variayle
	}

	return 0;
}
