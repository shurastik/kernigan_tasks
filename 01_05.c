/*
Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
	int fahr;
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
	        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}
