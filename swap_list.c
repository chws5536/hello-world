#include <stdio.h> //printf, scanf

void swap(double *pnum, double *p2num);							//to swap the values in two chosen variables
void line_up(double *pnum1, double *pnum2, double *pnum3);		//to list the inputs in order from the largest to the smallest

int main(void) {
	while (1) {							//to facilitate repeated attempts
		double num1, num2, num3;

		printf("Enter three (whole or decimal) numbers (enter three 0's to quit) : ");
		scanf("%lf%lf%lf", &num1, &num2, &num3);			//can also receive whole numbers
		if (num1 == 0 && num2 == 0 && num3 == 0) exit(0);	//to leave the loop
		//tried to type in "end" here instead of zeros but could not do it without adding unnecessary variables

		line_up(&num1, &num2, &num3);
		printf("\nFrom the biggest to the smallest: %.1lf, %.1lf, %.1lf\n\n", num1, num2, num3);
	}
	return 0;
}

void swap(double *pnum, double *p2num) {
	double temp;

	temp = *pnum;
	*pnum = *p2num;
	*p2num = temp;
}

void line_up(double *pnum1, double *pnum2, double *pnum3) {
	if (*pnum2 > *pnum3 && *pnum2 > *pnum1) {		//if num2
		swap(pnum2, pnum1);							//switch num1
		if (*pnum3 > *pnum2) swap(pnum3, pnum2);	//switch num2 if needed
	}
	else if (*pnum3 > *pnum1 && *pnum3 > *pnum2) {	//if num3
		swap(pnum3, pnum1);							//switch num1
		if (*pnum3 > *pnum2) swap(pnum3, pnum2);	//switch num2 if needed
	}
	else if (*pnum2 == *pnum3 && *pnum3 > *pnum1) {	//if num2 == num3
		swap(pnum3, pnum1);							//switch num1
	}
	else {
		if (*pnum3 > *pnum2) swap(pnum3, pnum2);	//num1 is the largest; switch num2 if needed
	}
}
