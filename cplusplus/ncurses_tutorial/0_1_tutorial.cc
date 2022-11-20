#include <ncurses.h>
using namespace std;

int main(int argc, char** argv){

	// init screen
	// sets up memory and clear screen
	initscr();

	int y = 10;
	// the amount of rows from the top
	int x = 10;
	// the amount of rows from the left

	// moves the cursor to the specified location:
	move (y, x);

	// prints a string (const char* ) to a window
	printw("Hello World");

	// refreshes the screen to match what is in memory
	refresh();

	// waits for user input, returns int value of that key
	int c = getch();

	refresh();
	clear();
	move(9,9);
	printw("%d", c);

	getch();

	// waits for user input, returns int value of that key
	getch();

	endwin();
	// deallocates memory and ends ncurses
	// everything in ncurses happens between those two functions.

	return 0;
}
