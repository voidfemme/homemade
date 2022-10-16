#include <iostream>
#include <iomanip>
using namespace std;

void FormatFun(int width){
	cout << setw(width) << setfill('-') << " " << endl;
}

int Decrement(int a){
	return a--;
}

int Increment(int a){
	return a++;
}

int main(){
	int x = 0;
	int y = 0;
	int answer = 0;
	int oops = 0;

	while(true){
		cout << "x y: ";
		cin >> x;
		cin >> y;
		if(x==y){
			cout << " ...terminating." << endl;
			break;
		}

		FormatFun(40);
		cout << " You entered: " << endl;
		cout << "  x = " << x << endl;
		cout << "  y = " << y << endl;

		for(int i=0;i<(x*y);i++){
			cout << "     x = " << x << endl;
			cout << "     y = " << y << endl;
			FormatFun(5);
			cout << " x * y = " << x * y << endl;
			x--;
			y++;
			FormatFun(20);
			if(i>50){
				cout << " ...terminating." << endl;
				break;
			}
		}
	}

	return 0;
}
