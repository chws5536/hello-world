#include <stdio.h>

int main() {
	double weight, height, bmi;

	printf("Enter your weight in kilograms (round to the tenth place) : ");
	scanf("%lf", &weight);
	printf("Enter your height in meters (round to the hundredth place):");
	scanf("%lf", &height);
	printf("\n");

	bmi = weight / (height * height);
	printf("Your BMI is %.1lf\n", bmi);

	if (bmi < 18.5) {
		printf("You are underweight\n");
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("You are healthy\n");
	}
	else if (bmi >= 25 && bmi <= 29.9) {
		printf("You are overweight\n");
	}
	else {
		printf("You are obese\n");
	}
	return 0;
}
