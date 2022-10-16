#include "simplepong.h"
using namespace std;
/* "An enumeration is a distinct type whose value is restricted to a range of values,
   which may include several explicitly named constants ('enumerators'). The values of
   the constants are values of an integral type known as the underlying type of the
   enumeratlion." (https://en.cppreference.com/w/cpp/language/enum)
	-- An "integral type" represents a whole number. It's an integer.
 	-- "enumeration" = "the action of mentioning a number of things one by one."
 		-Oxford Languages 							*/
int main() {
	srand(time(NULL));
	cBall c(0,0);
	cout << "LEGEND: STOP = 0, W = 1, NW = 2," << endl << "SW = 3, E = 4, NE = 5, SE = 6" << endl;
	cout << c << endl;
	
	c.randomDirection();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl << endl;

	c.randomDirection();
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl << endl;;


	c.randomDirection();
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl << endl;

	c.randomDirection();
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	return 0;
}
