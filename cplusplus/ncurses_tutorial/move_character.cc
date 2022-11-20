#include <ncurses.h>
#include <iostream>
#include <string>

// print a character to the screen, and move it according to input_chars 'a', 's', 'd', and 'w'

const int NSCREENHEIGHT = 30;
const int NSCREENWIDTH = 80;
std::string tetromino[7];
const int NFIELDHEIGHT = 18;
const int NFIELDWIDTH = 12;

int main()
{
	/* NCURSES START*/
	initscr();
	noecho();
	cbreak();

	// create a screen for our game
	WINDOW* tetris_field = newwin(NFIELDHEIGHT, NFIELDWIDTH, 1, 1);
	box(tetris_field, 0, 0);
	refresh();
	wrefresh(tetris_field);

	int c = wgetch(tetris_field);
	switch(c)
	{
		case 'a':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 's':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'd':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'w':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
	}
	c = wgetch(tetris_field);
	switch(c)
	{
		case 'a':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 's':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'd':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'w':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
	}
	c = wgetch(tetris_field);
	switch(c)
	{
		case 'a':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 's':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'd':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'w':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
	}
	c = wgetch(tetris_field);
	switch(c)
	{
		case 'a':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 's':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'd':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
		case 'w':
			mvprintw(tetris_field, 1, 1, "left");
			wrefresh(tetris_field);
	}
	getch();
	endwin(); /* NCURSES END */
}

