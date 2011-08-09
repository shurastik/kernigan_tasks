/*
Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. 
*/

#include <stdio.h>

main() {
	printf("Enter char: ");
	int c = getchar();
	printf("%c[%i] == EOF - %i\n", c, c, c == EOF);
}
