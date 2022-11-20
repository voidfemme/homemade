#include <ncurses.h>
using namespace std;

int main(int argc, char** argv){
	initscr();
	// cbreak();
	// raw();
	// noecho();
	int height = 10;
	int width = 20;
	int start_y = 10;
	int start_x = 10;

	// in ncurses, y always comes before x
	WINDOW* win = newwin(height, width, start_y, start_x);
	refresh();

	box(win, 0, 0);
	// wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
	// wprintw(win, "this is my box"); 
		// this will print the title on the same line as the top of the box, because the cursor gets placed relative to the window.
		// 0,0 becomes wherever the x and y values are smallest within the window. 0,0 is where the border gets drawn
		// instead, use mvwprintw() in order to place the title correctly
	mvwprintw(win, 1, 1, "this is my box");
	wrefresh(win);

	// You have to remember that what's on the screen and what's in memory is two different things
	//
	int c = getch();

	endwin();
	return 0;
}
