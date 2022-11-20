#include <ncurses.h>
#include <string>
using namespace std;

void startNCurses(bool use_raw, bool use_noecho);
void PrintMenu(WINDOW * menu, string choices[], int size, int highlight);

int main(int argc, char** argv)
{
	/* NCURSES START */
	initscr();
	noecho();
	cbreak();

	int y, x, y_begin, x_begin, y_max, x_max;
	//getyx(<window-name>, y, x)
	// passing these values will change the value of y and x
	// (in other words they are passed by reference in the library)
	getyx(stdscr, y, x);
	getbegyx(stdscr, y_begin, x_begin);
	getmaxyx(stdscr, y_max, x_max);

	printw(" %d %d %d %d %d %d", y, x, y_begin, x_begin, y_max, x_max);

	// make sure program waits before exiting...
	getch();
	endwin();
	/* NCURSES END */

	return 0;
}
