#include <iostream>
using namespace std;

enum eDir{ STOP = 0, WEST = 1, NORTHWEST = 2, SOUTHWEST = 3, EAST = 4, NORTHEAST = 5, SOUTHEAST = 6 };

class cBall {
	private:
		int x, y;
		int originalX, originalY;
		eDir direction;
	public:
		cBall(int posX, int posY);
		void reset();
		void changeDirection(eDir d);
		void randomDirection();
		inline int getX(){ return x; }
		inline int getY(){ return y; }
		inline eDir getDirection(){ return direction; }
		void Move();
	friend ostream& operator <<(ostream& o, cBall c){
		o << "Ball {" << c.x << "," << c.y << "}{" << c.direction << "]";
		return o;
	}
};

class cPaddle {
	private:
		int x, y;
		int originalX, originalY;
	public:
		cPaddle();
		cPaddle(int posX, int posY);
		inline void reset() { x = originalX; y = originalY; };
		inline int getX { return x; };
		inline int getY { return y; };
		inline void moveUp() { y--; };
		inline void moveDown() { y++; };
		friend ostream& operator<<(ostream& o, cBall c) {
			o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";
			return o;
		}
};
