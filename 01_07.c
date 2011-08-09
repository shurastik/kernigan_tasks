#include <stdio.h>

main() {
	int current_char;
	int space_count = 0;
	while ((current_char = getchar()) != EOF) {
		if (current_char == ' ') {
			if (space_count == 0) {
				space_count++;
				printf("%c", current_char);
			}
		} else {
			space_count = 0;
			printf("%c", current_char);
		}
	}
}
