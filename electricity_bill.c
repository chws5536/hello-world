#include <stdio.h>


int main() {
	//declaring variables
	int base_price;
	double kwp, kw, result, tax = 0.09;

	printf("How much electricity did you use this month? (in kilowatt) ");
	scanf("%lf", &kw);
	while (kw <= 1) {
		printf("How much electricity did you use this month? (in kilowatt) ");
		scanf("%lf", &kw);
	}

	//calculating base_price
	if (kw >= 1 && kw <= 100) {
		base_price = 370;
	}
	else if (kw > 100 && kw <= 200) {
		base_price = 660;
	}
	else if (kw > 200 && kw <= 300) {
		base_price = 1130;
	}
	else if (kw > 300 && kw <= 400) {
		base_price = 2710;
	}
	else if (kw > 400 && kw <= 500) {
		base_price = 5130;
	}
	else{
		base_price = 9330;
	}

	//calculating rate per kilowatt
	if (kw <= 100) {
		kwp = kw * 52.0;
	}
	else if (kw > 100 && kw <= 200) {
		kwp = (52.0 * 100) + (kw - 100) * 88.5;
	}
	else if (kw > 200 && kw <= 300) {
		kwp = (52.0 * 100) + (88.5 * 100) + (kw - 200) * 127.8;
	}
	else if (kw > 200 && kw <= 300) {
		kwp = (52.0 * 100) + (88.5 * 100) + (127.8 * 100) + (kw - 300) * 184.3;
	}
	else if (kw > 200 && kw <= 300) {
		kwp = (52.0 * 100) + (88.5 * 100) + (127.8 * 100) + (184.3 * 100) + (kw - 400) * 274.3;
	}
	else {
		kwp = (52.0 * 100) + (88.5 * 100) + (127.8 * 100) + (184.3 * 100) + (274.3 * 100) + (kw - 500) * 494.0;
	}
	result = (base_price + kwp) * (1 + tax);		//tax in effect at 9%

	//printing out result
		printf("Your electrticity bill for this month is $%.2lf", result);

	return 0;
}
