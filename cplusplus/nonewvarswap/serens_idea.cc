#include <iostream>
using namespace std;

int main(){
	int x = 0;
	int y = 0;

	cout << " x & y : ";
	cin >> x;
	cin >> y;
	x = x + y;

	y = x - y;

	x = x - y;

	cout << " results: " << endl;
	cout << " x = " << x << endl;
	cout << " y = " << y << endl;
	return 0;
}
