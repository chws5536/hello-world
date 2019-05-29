#include <stdio.h>		//printf, scanf, getchar

void rotate(int *pnum1, int *pnum2, int *pnum3);		//pushes the numbers to the left; the front goes to the rear
int cnt;

int main(void) {
	int num1, num2, num3;

	printf("Please enter three whole numbers : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	getchar();			//to clear the buffer
	while (1) {			//thought about using the pointer to set up the looping condition (ex. enter != '\n'), but it would just add more steps
		printf("\nYour result is %d : %d : %d\n", num1, num2, num3);
		printf("The number of rotations : %d\n\"Enter\" to continue or enter any other key to quit : ", cnt);
		rotate(&num1, &num2, &num3);		//putting in variable addresses to use pointers
	}
	return 0;
}

void rotate(int *pnum1, int *pnum2, int *pnum3) { //pointers are useful for modifying variables across functions
	int temp; 
	char enter;

	enter = getchar();			//to check for the quit message
	if (enter == '\n') {		//if the enter is pressed
		temp = *pnum1;			//swap
		*pnum1 = *pnum2;
		*pnum2 = *pnum3;
		*pnum3 = temp;
		cnt++;
	}
	else exit(0);				//if it is not the enter key, quit
}
