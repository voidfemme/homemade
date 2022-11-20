#include <iostream>
#include <ncurses.h>
#include <stdio.h>
using namespace std;

const int nScreenWidth = 80;
const int nScreenHeight = 30;
wstring tetromino[7];
const int nFieldWidth = 12;
const int nFieldHeight = 18;
unsigned char* pField = nullptr;

int Rotate(int px, int py, int r){
	int pi = 0;
	// r mod 4 gives us our rotation value.
	switch (r % 4){
		case 0:
			pi = py * 4 + px; 		//   0 degrees
			break;
		case 1:
			pi = 12 + py - (4 * px); 	//  90 degrees
			break;
		case 2:
			pi = 15 - (4 * py) - px;	// 180 degrees
			break;
		case 3:
			pi = 3 - py + (4 * px);	// 270 degrees
			break;
	}
	return pi;
}

int main(){
	// Create assets
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");

	tetromino[1].append(L"....");
	tetromino[1].append(L"..X.");
	tetromino[1].append(L"..X.");
	tetromino[1].append(L".XX.");

	tetromino[2].append(L"XXX.");
	tetromino[2].append(L".X..");
	tetromino[2].append(L"....");
	tetromino[2].append(L"....");

	tetromino[3].append(L"..X.");
	tetromino[3].append(L".XX.");
	tetromino[3].append(L".X..");
	tetromino[3].append(L"....");

	tetromino[4].append(L"....");
	tetromino[4].append(L".XX.");
	tetromino[4].append(L".XX.");
	tetromino[4].append(L"....");

	pField = new unsigned char[nFieldWidth*nFieldHeight]; // Create play field
		// why is this char "unsigned"?
	for (int x = 0; x < nFieldWidth; x++){ //board boundary
		for (int y=0;y<nFieldHeight;y++){
			// if x == 0, x == width, x == height; then, set the value to 9 (our border) else, set it to empty (0)
			pField[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;
		}
	}

	/* NCURSES START */
	initscr();
	noecho();
	cbreak();

	// draw a window to be our border
	WINDOW* screen = newwin(nFieldHeight, nFieldWidth, 1, 1);

	// Display Frame
	box(screen, 0, 0);
	refresh();
	wrefresh(screen);

	// GAME LOOPS
	// 	the most important part of a game engine; the thing that sequences everything that's going on.
	// 		Tetris needs loops that handle timing, user input and drawing it to the screen
	
	bool b_game_over = false;
	char draw_index[10] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', '=', '#'};
	while(!b_game_over)
	{
		// Draw Field
		for (int x = 0; x < nFieldWidth; x++)
		{
				for(int y = 0; y < nFieldHeight; y++)
				{
					mvwprintw(screen, y, x, (const char*)draw_index[pField[y*nFieldWidth + x]]);
				}
		}

	}
	return 0;
}