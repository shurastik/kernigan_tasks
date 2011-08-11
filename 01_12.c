/*
Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>

#define TRUE	1
#define FALSE	0

main() {
	int ch;
	int in_word = FALSE;
	while ((ch = getchar()) != EOF) {
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			putchar(ch);
		}
	}
}
