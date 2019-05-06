#include <stdio.h>

int main() {
	//creating variables
	int amount_received, item1, item2, item3, change, sum, fiveb, oneb, fivec, onec, fiftyc, tenc, res1, res2, res3, res4, res5, res6;

	//calculating how much money to give as change
	printf("Enter the amount received : ");
	scanf("%d", &amount_received);
	printf("Enter the price of each item (up to 3 items) : ");
	scanf("%d%d%d", &item1, &item2, &item3);
	sum = item1 + item2 + item3;
	change = amount_received - sum;

	fiveb = change / 5000;
	res1 = change % 5000;
	oneb = res1 / 1000;
	res2 = res1 % 1000;
	fivec = res2 / 500;
	res3 = res2 % 500;
	onec = res3 / 100;
	res4 = res3 % 100;
	fiftyc = res4 / 50;
	res5 = res4 % 50;
	tenc = res5 / 10;
	res6 = res5 % 10;

	// printing output
	printf("The change is %d won\n\n", change);
	printf("You need to give: \n");
	if (fiveb != 0) {
		printf("5000 won bill : %d\n", fiveb);
	}
	if (oneb != 0) {
		printf("1000 won bill : %d\n", oneb);
	}
	if (fivec != 0) {
		printf("500 won coin : %d\n", fivec);
	}
	if (onec != 0) {
		printf("100 won coin : %d\n", onec);
	}
	if (fiftyc != 0){
		printf("50 won coin : %d\n", fiftyc);
	}
	if (tenc != 0){
	printf("10 won coin : %d\n", tenc);
	}

	return 0;
}
