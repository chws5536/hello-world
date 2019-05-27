#include <stdio.h> //printf, scanf, getchar

//declaring functions
void func(int * quo, int * rem);
void quit(int n);

int main(void) {
	while (1) {
		int quo, rem;
		func(&quo, &rem);											//calculates the quotient and the remainder
		printf("Quotient : %d, Remainder : %d\n\n", quo, rem);
	}
	return 0;
}

void func(int * quo, int * rem) {									//transferring values using pointers
	int n, m;

	printf("Please enter a positive whole number to be the dividend (or enter 0 to quit) : ");
	scanf("%d", &n);
	quit(n);			//can choose to exit the while loop
	getchar();
	while (n < 0) {		//to prevent entering a wrong number
		printf("\nYour input is out of range\nPlease enter a positive whole number to be the dividend : ");
		scanf("%d", &n);
		quit(n);
	}

	printf("Please enter a positive whole number to be the divisor : ");
	scanf("%d", &m);
	getchar();			//cannot use 0 to quit here and in the loop below because 0 cannot be a divisor
						//would cause an error in the code
	while (m < 0) {
		printf("\nYour input is out of range\nPlease enter a positive whole number to be the divisor : ");
		scanf("%d", &m);
	}

	*quo = n / m;		//calculating the value and putting it inside of the address
	*rem = n % m;

}

void quit(int n) {			//leaving the while loop when 0 is entered
	if (n == 0) {
		exit(0);
	}
}
