/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines. 
*/
#include <stdio.h>

main() {
	int ch;
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	while ((ch = getchar()) != EOF) {
		if (ch == ' ') blanks++;
		if (ch == '\t') tabs++;
		if (ch == '\n') newlines++;
	}
	printf("Blanks: %i\n", blanks);
	printf("Tabs: %i\n", tabs);
	printf("Newlines: %i\n", newlines);
}