/*
Exercise 1-3. Modify the temperature conversion program to print a heading above the table. 
*/

#include <stdio.h>

main() {
	int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	upper = 300;
 	step = 20;
	fahr = lower;
 	printf("FAHR   CELS\n");
  	printf("---- ------\n");
  	while (fahr <= upper) {
     		celsius = (5.0 / 9.0) * (fahr - 32.0);
	        printf("%4.0f %6.1f\n", fahr, celsius);
	        fahr = fahr + step;
	}
}
