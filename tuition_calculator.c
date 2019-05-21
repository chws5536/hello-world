#include <stdio.h>

int main() {
	// declaring variables
	int wealth;									//wealth = 100 will be the median value
	int tuition_old = 100, tuition_new;
	double gpa;

	//collecting necessary data
	while (1) {
		printf("Enter your grade (max = 4.5) : ");
		scanf("%lf", &gpa);
		while (gpa > 4.5) {
			printf("Enter your grade (max = 4.5) : ");
			scanf("%lf", &gpa);
		}
		printf("Enter your wealth level: ");
		scanf("%d", &wealth);
		printf("\n");

		//calculating scholarship amount
		if (gpa >= 3.0 || wealth <= 20) {
			if (gpa >= 4.0) {
				if (wealth > 100) {
					tuition_new = tuition_old * 0.8;
				}
				else if (wealth <= 100) {
					tuition_new = tuition_old * 0.6;
				}
			}
			else if (gpa >= 3.0) {
				if (wealth > 100) {
					tuition_new = tuition_old * 0.9;
				}
				else if (wealth <= 100) {
					tuition_new = tuition_old * 0.7;
				}
			}
			else if (wealth <= 20) {
				tuition_new = tuition_old * 0.3;
			}

			printf("You have a $ %d scholarship\n", tuition_old - tuition_new);
			printf("Your tuition before the scholarship : $ %d\n", tuition_old);
			printf("Your tuition after the scholarship : $ %d\n\n", tuition_new);
		}

		else {
			tuition_new = tuition_old;
			printf("We are sorry, but you do not qualify for a scholarship\n", tuition_old);
			printf("Your tuition : $ %d\n\n", tuition_old);
		}
	}
	return 0;
}
