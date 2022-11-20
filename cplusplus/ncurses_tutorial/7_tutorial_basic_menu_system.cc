#include <ncurses.h>
#include <string>

void PrintMenu(WINDOW * menu, std::string choices[], int size, int highlight);

int main(int argc, char ** argv)
{
	/* NCURSES START */
	initscr();
	noecho();
	cbreak();
	
	// get screen size
	int y_max, x_max;
	getmaxyx(stdscr, y_max, x_max);

	// create a window for our input
	WINDOW * menu_win = newwin(6, x_max - 12, y_max - 8, 5);
	box(menu_win, 0, 0);
	refresh();
	wrefresh(menu_win);

	// enable the arrow keys
	keypad(menu_win, true);

	std::string choices[3] = {"Walk", "Jog", "Run"};
	int choice;
	int highlight = 0;

	while(1)
	{
		for(int i=0; i<3; i++)
		{
			if(i == highlight)
				wattron(menu_win, A_REVERSE);
			mvwprintw(menu_win, i + 1, 1, choices[i].string);
			wattroff(menu_win, A_REVERSE);
		}
	}
	// make sure program waits before exiting...
	getch();
	endwin();
	/* NCURSES END */
	
	return 0;
}
