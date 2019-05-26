#include <stdio.h> //printf, scanf, getchar

void instruction1(int i);
void instruction2(int i);
void instruction3(int i);

int main() {
	while (1) {		//to facilitate repeated testing


		int i, j, lotto_num[7] = { 0 };		//six digits + null = 7

		//receiving input for lottery numbers
		for (i = 0; i < 6; i++) {
			instruction1(i);
			scanf("%d", &lotto_num[i]);
			getchar();
			printf("\n");
			while (lotto_num[i] < 1 || lotto_num[i] > 45) {		//limiting the numbers to be between 1 and 45
				instruction3(i);
				scanf("%d", &lotto_num[i]);
				getchar();
				printf("\n");
			}
			if (i > 0) {
				for (j = 5; j >= 0; j--) {
					if (i != j) {
						if (lotto_num[i] == lotto_num[j]) {						//if the same number is entered again -> redo
							instruction2(i);
							scanf("%d", &lotto_num[i]);
							getchar();
							printf("\n");
							j = 5;
							while (lotto_num[i] < 1 || lotto_num[i] > 45) {		//if the input is outside of the range -> redo
								instruction3(i);
								scanf("%d", &lotto_num[i]);
								getchar();
								printf("\n");
							}
						}
					}
				}

			}
		}
		//printing out the result
		printf("Your guesses for the lottery :");
		for (i = 0; i < 6; i++) {
			printf("%d ", lotto_num[i]);
		}
		printf("\n\nResetting...\n\n");
	}

	return 0;
}
//to clear up the screen
void instruction1(int i) {
	printf("Enter your six different digits for the lottery\nEach needs to be between 1 and 45\n");
	printf("Please enter your guess for Number %d : ", i + 1);
}

void instruction2(int i) {
	printf("You entered the same number twice!\nPlease try again\n\n");
	printf("Enter your six different digits for the lottery\nEach needs to be between 1 and 45\n");
	printf("Please enter your guess for Number %d : ", i + 1);
}

void instruction3(int i) {
	printf("The digit is outside of the range\nEach needs to be between 1 and 45\n");
	printf("Please enter your guess for Number %d : ", i + 1);
}
