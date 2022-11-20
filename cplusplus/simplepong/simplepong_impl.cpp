#include "simplepong.h"

cBall::cBall(int posX,int posY){
	originalX = posX;
	originalY = posY;
	x = posX;
	y = posY;
	direction = STOP;
}

void cBall::reset(){
	x = originalX;
	y = originalY;
	direction = STOP;
}

void cBall::changeDirection(eDir d){
	direction = d;
}

void cBall::randomDirection(){
	direction = (eDir)((rand() % 6) + 1);
}

void cBall::Move(){
	switch(direction){
		case STOP:
			break;
		case WEST:
			x--;
			break;
		case NORTHWEST:
			x--;
			y++;
			break;
		case SOUTHWEST:
			x--;
			y--;
			break;
		case EAST:
			x++;
			break;
		case NORTHEAST:
			x++;
			y++;
			break;
		case SOUTHEAST:
			x++;
			y--;
			break;
	}
}

cPaddle::cPaddle() {
	x = y = 0;
}

cPaddle::cPaddle(int posX, int posY) {
	originalX = posX;
	originalY = posY;
	x = posX;
	y = posY;
}
