#include <stdio.h>			//printf, scanf

//declaring function
int prime_check(int n);

//declaring global variable to transfer value between main() and prime_check()
int k = 2;

int main() {
	while (1) {
		int n, res, cnt = 0, i;
    
		//receive input for n
		printf("Prime number finder\n");
		printf("Please enter a postive number greater than 2: ");
		scanf("%d", &n);
		getchar();
		printf("\n");

		while (n <= 1) {
			printf("Prime number finder\n");
			printf("Your number is smaller than 2\n");
			printf("Please enter a postive number greater than 2: ");
			scanf("%d", &n);
			getchar();
			printf("\n");
		}
  
    //printing out prime numbers
		for (i = 2; i <= n; i++) {
			res = prime_check(n);
			if (k >= 2) {
				k++;							//increasing k to test different numbers
			}
			if (res == 1) {						//print out the prime number in columns of 5
				printf("%4d", i);
				cnt++;
				if (cnt % 5 == 0) {
					printf("\n");
					cnt = 0;
				}
			}
		}
		printf("\n\n");
		k = 2;                    //resetting k for repeated usage
	}
	return 0;
}

//find every prime number from 2 to number given
int prime_check(int n) {
	int l;
	for (l = 2; l < k; l++) {
		if (k % l == 0) {				//condition for not-prime number
			return 0;					//if k is not prime, return 0
		}
	}
	return 1;							//if k is prime, return 1
}
