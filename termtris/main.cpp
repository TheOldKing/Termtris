#include <curses.h>

void startGame();
void checkWindow();

int main()
{
	initscr();
	noecho();
	raw();
	cbreak();
	keypad(stdscr,true);
	curs_set(0);
	

	checkWindow();

	startGame();
	
	//some random stuff so the window won't close right after you hit ESC
	clear();
	printw("hello world!");

	refresh();
	getch();

	endwin();
	return 0;
}