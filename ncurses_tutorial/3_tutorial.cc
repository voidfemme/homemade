#include <ncurses.h>
using namespace std;

int main(int argc, char** argv){

	/* NCURSES START */
	initscr();
	// cbreak(); // allows ^c to quit the program. default = cbreak enabled.
	// raw(); // allows ^c to be shown
	noecho(); // whatever input the users enter doesn't actually print to the screen
	int height = 10;
	int width = 30;
	int start_y = 10;
	int start_x = 10;

	// in ncurses, y always comes before x
	WINDOW* top_left_win = newwin(height, width, 0, 0);
	WINDOW* top_right_win = newwin(height, width, 0, 2 + width);
	WINDOW* bottom_left_win = newwin(height, width, height + 1, 0);
	WINDOW* bottom_right_win = newwin(height, width, height + 1, 2 + width);

	refresh();

	box(top_left_win,'1','1');
	box(top_right_win,'2','2');
	box(bottom_left_win,'3','3');
	box(bottom_right_win,'4','4');

	wrefresh(top_left_win);
	wrefresh(top_right_win);
	wrefresh(bottom_left_win);
	wrefresh(bottom_right_win);

	wborder(top_left_win,'L',' ','T','B','!','@','#','$');
	mvwprintw(top_left_win, 1, 1, "this is my box");
	wrefresh(top_left_win);

	getch();
	wrefresh(bottom_right_win);

	wborder(top_left_win,'L',' ','T',' ','!','@','#','$');
	wborder(top_right_win,' ','R','T',' ','!','@','#','$');
	wborder(bottom_left_win,'L',' ',' ','B','!','@','#','$');
	wborder(bottom_right_win,' ','R',' ','B','!','@','#','$');

	wrefresh(top_left_win);
	wrefresh(top_right_win);
	wrefresh(bottom_right_win);
	wrefresh(bottom_left_win);

	getch();
	mvwprintw(top_left_win, 3, 2, "press any key to exit");
	wrefresh(top_left_win);
	getch();

	endwin();
	/* NCURSES END */

	return 0;
}
