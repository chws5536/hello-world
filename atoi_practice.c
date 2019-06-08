#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char i[10], size;
	int j, k;
	size = sizeof(i) / sizeof(i[0]);

	while (1) {
		printf("Enter a number (10 will be added to the number) : ");
		for (j = 0; j < size; j++) {
			i[j] = getchar();
			if (i[j] == '\n') {
				i[j] = '\0';
				break;
			}
		}
		k = atoi(i);
		k += 10;
		printf("%d\n\n", k);
	}
	return 0;
}
