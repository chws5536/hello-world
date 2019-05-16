#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
	//marks the starting time for running the code
	clock_t begin = clock();

	//declaring variables
	double time;
	int i, j, b = 1, num, cnt = 0;

	//receive user input
	printf("Enter a number that is greater than or equal to 2 :");
	scanf("%d", &num);
	getchar();
	while (num < 2) {
		printf("Enter a number that is greater than or equal to 2 :");
		scanf("%d", &num);
		getchar();
	}
	printf("\n");

	//calculates for prime numbers up to the input value
	for (j = 2; j <= num; j++) {
		for (i = 2; i < j; i++) {
			if (j % i == 0) {
				b = 0;
				break;
			}b = 1;
		}
		if (b == 1) {
			printf("%2d ", j);				//print out only the prime numbers
			++cnt;
			if (cnt == 5) {					//go to the next line if there are five already
				printf("\n");
				cnt = 0;
			}
		}
	}

	//calculating how many seconds were needed for processing
	clock_t end = clock();
	time = (double)((end - begin) / CLOCKS_PER_SEC);
	printf("\n%lf", time);
	return 0;
}
