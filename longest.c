#include <stdio.h>

int main(void) {
	int num, cnt = 0, max = 0;
	char fruit;

	printf("Enter a name of a fruit : ");
	while (1){
		num = scanf("%c", &fruit);
		if (num == -1) break;			//^Z does not work on the first try
		else if (fruit == '\n') {
			cnt = 0;
			printf("\nEnter a name of a fruit : ");
			continue;
		}
		cnt += num;
		if (cnt > max) max = cnt;
	}
	printf("\nThe longest word has %d letters\n", max);
	return 0;
}
