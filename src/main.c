#include <stdio.h>
#include <curl/curl.h>
#include <ncurses.h>

int main() 
{
	// Get ncurses all set up
	initscr(); // start ncurses
	noecho();
	raw(); // pass input immediately to the program

	// get input
	char str[101];
	printw("Enter a URL: ");

	echo();
	getstr(str);
	noecho();

	clear();

	printw("%s\n", str);
	printw("Hit any key to exit");
	getch();
	endwin(); // end ncurses
}
