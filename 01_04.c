#include <stdio.h>

int main() {
	int lower = -40;
    int upper = 100;
    int step = 10;
    float cels, fahr;
    cels = lower;
    printf("\n\nCELS   FAHR\n");
    printf("---- ------\n");
    while (cels <= upper) {
        fahr = (9.0 / 5.0) * cels + 32.0;
        printf("%4.0f %6.1f\n", cels, fahr);
        cels += step;
    }
}
