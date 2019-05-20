#include <stdio.h>

//delcaring functions
//Or you can just write the functions out here before the main()
int total(int grade_kor, int grade_eng, int grade_math);			//to calculate the sum
double average(int tot);											//to calculate the average
void print_title(void);												//to print out words

int main() {
	//declare variables
	int grade_kor, grade_eng, grade_math, tot;
	double avg;

	//receive inputs for variables
	printf("Please enter your grades in Korean, English, and Math : ");
	scanf("%d%d%d", &grade_kor, &grade_eng, &grade_math);
	printf("\n");

	//calculate the result using fucntions
	tot = total(grade_kor, grade_eng, grade_math);			//save the output in variable "tot"
	avg = average(tot);										//save the output in variable "avg"
	print_title();
	printf("%10d %10d %10d %10d %10.1lf\n\n", grade_kor, grade_eng, grade_math, tot, avg);

	return 0;
}

int total(int grade_kor, int grade_eng, int grade_math) { //receiving the values for kor, eng, math
	int tot;
	tot = grade_kor + grade_eng + grade_math;

	return tot;
}

double average(int tot) {			//receiving the value for tot
	double avg;
	avg = tot / 3.0;			

	return avg;
}

void print_title(void) {
	printf("                  =====<Grades>=====\n");
	printf(" ------------------------------------------------------\n");
	printf("%10s %10s %10s %10s %10s\n", "Korean", "English", "Math", "Total", "Average");
	printf(" ------------------------------------------------------\n");

}
