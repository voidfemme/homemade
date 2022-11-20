#include <ncurses.h>
using namespace std;

int main(int argc, char** argv){

	/* NCURSES START */
	/*
	 * A_NORMAL
	 * A_STANDOUT
	 * A_REVERSE
	 * A_BLINK
	 * A_DIM
	 * A_BOLD
	 * A_PROTECT
	 * A_INVIS
	 * A_ALTCHARSET
	 * A_CHARTEXT
	 */

	attron(A_REVERSE);
	printw("This is some text");
	attroff(A_REVERSE);

	initscr();

	int y = 10;
	int x = 10;

	move (y, x);

	printw("Hello World");

	refresh();

	int c = getch();

	refresh();
	clear();
	move(9,9);
	printw("%d", c);

	getch();

	getch();

	endwin();

	return 0;
}
