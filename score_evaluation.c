#include <stdio.h>

int main() {
	int ary[7], i, temp, min, j, total;
	double avg;
	while (1) {
		//receiving user input
		printf("Please enter the five scores : ");
		scanf("%d%d%d%d%d", &ary[0], &ary[1], &ary[2], &ary[3], &ary[4]);
		getchar();

		//using selection sort to list input from the smallest to the biggest
		for (i = 0; i < 5 - 1; i++) {
			min = i;									//set default minimum value
			for (j = i + 1; j < 5; j++) {
				if (ary[min] > ary[j]) {				//if another value is smaller than the current minium
					min = j;        							//set new minimum
				}
			}										            	//after determining the smallest value in the j loop
			temp = ary[i];								    //swap the minimum with ary[i]
			ary[i] = ary[min];							
			ary[min] = temp;
			//checking on the sorting process
			//printf("%d %d %d %d %d\n\n", ary[0], ary[1], ary[2], ary[3], ary[4]);
		}

		//printing out the result
		printf("\n");
		printf("Determining which scores will count...\n");

		printf("Removing the smallest and the biggest scores...\n\n");
		printf("Valid scores are %d, %d, %d\n", ary[1], ary[2], ary[3]);
		total = ary[1] + ary[2] + ary[3];

		printf("Calculating the average...\n");
		avg = total / 3.0;

		printf("The average of the five scores is : %.1lf\n\n", avg);
	}
	return 0;
}
