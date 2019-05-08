#include <stdio.h>
#include <stdlib.h>

int main() {
	//declaring variables
	int guess, cnt, answer, b = 1;
	
	//generating random number
	answer = rand();
	while (answer > 50 && answer < 1) {
		answer = rand();
	}

	//starting the loop
	while (b) {
		printf("Enter an integer bewteen 1 and 50 : ");
		scanf("%d", &guess);
		printf("\n");
		cnt = 1;

		//if guessed correctly
		if (answer == guess) {
			printf("You guessed correctly!\nYou guessed %d time(s)\n", cnt);
		}

		//if wrong
		else {
			while (answer != guess) {
				printf("Wrong guess!\n");
				if (guess > answer) {
					printf("Your guess is greater than the answer\n");
					printf("Enter an integer : ");
					scanf("%d", &guess);
					printf("\n");
					cnt += 1;
				}

				else {
					printf("Your guess is smaller than the answer\n");
					printf("Enter an integer : ");
					scanf("%d", &guess);
					printf("\n");
					cnt += 1;
				}
			}
			printf("You guessed correctly!\nYou guessed %d time(s)\n", cnt);
	}
		b = 0;
		}
	return 0;
}
