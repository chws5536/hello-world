#include <stdio.h>

//distance = rate * time

int main() {
	//declaring variables
	int distance, kmh, hour, minute;
	double second, res1, res2;

	printf("Enter the distance (in kilometers) : ");
	scanf("%d", &distance);
	printf("\n");
	printf("Enter the desired speed (in kilometer per hour) : ");
	scanf("%d", &kmh);
	printf("\n");

	//calculating time 
	hour = distance / kmh;
	res1 = (double) distance / (double) kmh;
	res2 = (res1 - hour) * 60;
	minute = (int) res2;
	second = (res2 - minute) * 60;
	//shorter version
	//minute = (int) (((double)distance / (double)kmh) - hour) * 60;
	//second = (((((double)distance / (double)kmh) - hour) * 60) - minute) * 60;

	//printing result
	printf("Estimated duration of travel : %d hour(s) %d minute(s) %.3lf second(s)\n", hour, minute, second);

	return 0;
}
