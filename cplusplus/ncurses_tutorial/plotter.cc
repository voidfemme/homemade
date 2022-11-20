#include <ncurses.h>
using namespace std;

int main(int argc, char** argv){

	/* NCURSES START */
	// ncurses must be compiled in g++, with the option "-lncurses"
	initscr();
	// cbreak(); // allows ^c to quit the program. default = cbreak enabled.
	// raw(); // allows ^c to be shown
	noecho(); // whatever input the users enter doesn't actually print to the screen
	int height = 30;
	int width = 80;
	int start_y = 10;
	int start_x = 10;

	// in ncurses, y always comes before x
	// newwin(height, width, int begin_y, begin_x)
	WINDOW* plotter = newwin(height, width, 0, 0);
	WINDOW* interface = newwin(height - 15, width, 0 + height,0);

	refresh();

	// int box(WINDOW *win, chtype verch, chtype horch)
	box(plotter,'1','1');
	box(interface,'|','=');

	wrefresh(plotter);
	wrefresh(interface);

	wborder(plotter,'|','|','=','=','#','#','#','#');
	wborder(interface,'|','|','=','=','#','#','#','#');
	mvwprintw(plotter, 1, 1, "this is my box");
	wrefresh(plotter);

	getch();

	wborder(plotter,'|','|','=','=','#','#','#','#');
	wborder(interface,'|','|','=','=','#','#','#','#');
	wborder(interface,'|','|','=','=','#','#','#','#');

	wrefresh(plotter);
	wrefresh(interface);

	getch();
	mvwprintw(plotter, 3, 2, "press any key to exit");
	wrefresh(plotter);
	getch();

	endwin();
	/* NCURSES END */

	return 0;
}
