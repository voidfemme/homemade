#include <ncurses.h>
#include <string>
using namespace std;

void StartNCurses(bool use_raw, bool use_noecho);
void PrintMenu(WINDOW * menu, string choices[], int size, int highlight);

int Rotate(int px, int py, int r)
{
	int pi = 0;
	switch (r % 4)
	{
		case 0:
			pi = py * 4 + px;		// 	0 degrees
			break;
		case 1:					//     90 degrees
			pi = 12 + py - (4 * px);
		case 2:					//    180 degrees
			pi = 15 - (4 * py) - px;
			break;
		case 3:					//    270 degrees
			pi = 3 - py + (4 * px);
			break;
	}
	return pi;
}

int main(int argc, char ** argv)
{
	/* NCURSES START */
	initscr();
	noecho();
	cbreak();

	// get screen size
	int y_max, x_max;
	getmaxyx(stdscr, y_max, x_max);

	// create a window for our input and 
	//  newwin(int nlines, int ncols, int begin_y, int begin_x)
	WINDOW* input_win = newwin(y_max - 3, x_max - 5, 1, 1);
	// box(WINDOW *win, chtype, verch, chtype horch
	//  chtype is charater and input data
	box(input_win, 0, 0);
	refresh();
	wrefresh(input_win);

	int c = wgetch(input_win);
	int counter = 0;
	while(true)
	{
		c = wgetch(input_win);
		switch(c)
		{
			case 'a':
				mvwprintw(input_win, y_max / 2 + counter, x_max / 2, "left!");
				wrefresh(input_win);
				break;
			case 's':
				mvwprintw(input_win, y_max / 2 + counter, x_max / 2, "down!");
				wrefresh(input_win);
				break;
			case 'd':
				mvwprintw(input_win, y_max / 2 + counter, x_max / 2, "right!");
				wrefresh(input_win);
				break;
			case 'w':
				mvwprintw(input_win, y_max / 2 + counter, x_max / 2, "up!");
				wrefresh(input_win);
				break;
		}
		counter++;
	}

	if(c == 'a')
	{
		mvwprintw(input_win, y_max / 2, x_max / 2, "j!");
		wrefresh(input_win);
	}

	keypad(input_win, true);
	c = wgetch(input_win);
	if(c == KEY_UP)
	{
		mvwprintw(input_win, 1, 1, "You pressed UP!");
		wrefresh(input_win);
	}
//	if(c == KEY_F(1))

	// make sure the program waits before exiting...
	getch();
	endwin();
	/* NCURSES END */

}
