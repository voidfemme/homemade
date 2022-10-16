#include <iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int counter = 0;


	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	if(a<b){
		cout << " a is less than b" << endl;
		cout << " b - a = " << b-a << endl;
		cout << " (b + a ) / 2 = " << (b + a) / 2 <<  endl;
		cout << "a + (b - a) = " << a + (b - a) << endl;
		cout << "b - (b - a) = " << b - (b - a) << endl;
		for(int i=0;i<=b - a;i++){
			a+=2;
			b-=2;
		}
	}
	else if(b<a){
		cout << "b is less than a" << endl;
		cout << "a - b = " << a - b << endl;
		cout << " (b + a ) / 2 = " << (b + a) / 2 <<  endl;
		cout << "a + (b - a) = " << a + (b - a) << endl;
		cout << "b - (b - a) = " << b - (b - a) << endl;
		for(int i=0;i<=b - a;i++){
			a-=2;
			b+=2;
		}
	}
	cout << "final state:" << endl;
	//test one: a=223;b=271;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	counter

	return 0;
}

// y = mx + b
// y - b = mx
// x = (y - b) / m
//
// the slope of the angle is found by (a - b) \ x
//
// 321 - 99 = 
// 99 = 2(b - a + 1)
//
// a = 1 2 3 4 5 6 7 8 9 10
// b = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 23 24 25 26 27 28 29 30
