#include <iostream>
#include <iomanip>
using namespace std;

void FormatFun(int width){
	cout << setw(width) << setfill('-') << " " << endl;
}

void HorizontalRuler(int length){
	for(int i=0;i<length;i++){
		cout << i*2 < "|";
	}
	cout << endl;
}

void HorizontalLine(int length, char fill_char){
	for(int i=0;i<length;i++){
		cout << fill_char << fill_char; 
	}
	cout << endl;
}

void VerticalParallelLines(int length, char fill_char){
	for(int i=0;i<(length);i++){
		cout << fill_char << setw(2 * length) << setfill(' ') << fill_char << endl;
	}
}

void DrawRectangle(int x, int y, char fill_char){
	cout << endl;
	HorizontalRuler(x);
	HorizontalLine(x,fill_char);
	VerticalParallelLines(y,fill_char);
	HorizontalLine(x,fill_char);
}

int main(){
	int x = 0;
	int y = 0;
	bool stop = true;
	char fill_char;

	while(true){
		FormatFun(60);
		cout << "enter two positive int values separated by a space (equal values terminate the program): ";
		cin >> x;
		cin >> y;
		if(x==y){
			break;
		}
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "x + y = " << x + y << endl;
		cout << "x - y = " << x - y << endl;
		cout << "y - x = " << y - x << endl;
		cout << "2x - y = " << 2 * x - y << endl;
		cout << "2y - x = " << 2 * y - x << endl;
		FormatFun(20);
		cout << "enter fill_char char: ";
		cin >> fill_char;

		DrawRectangle(x,y,fill_char);

		// Swap them here without using a third variayle
	}

	return 0;
}
