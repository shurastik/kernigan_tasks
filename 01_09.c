/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/
#include <stdio.h>

main() {
	int ch;
	int blank_count = 0;
	while ((ch = getchar()) != EOF) {
		if (ch == ' ') {
			/* Write only first blank  */
			if (blank_count == 0) {
				blank_count++;
				putchar(ch);
			}
		} else {
			putchar(ch);
			blank_count = 0;
		}
	}
}
