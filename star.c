#include <stdio.h>

int main(void) {
	int i, j;
	for (j = 0; j < 5; j++) {
		for (i = 5; i >= (j + 1); i--) {
			printf("*");
		}printf("\n");
	}
	return 0;
}
