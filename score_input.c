#include <stdio.h>	//printf, scanf

void print_graph(int *ps, int size);		//printing out a star line

int main(void) {
	int score[5] = { 0 }, num, i;
	char code[5] = { 0 };
	while (1) {

		printf("Enter the five students' codes and scores : \n");
		printf("(Use only one letter for each student's code) \n\n");
		for (i = 0; i < 5; i++) {					
			printf("%d. ", i + 1);
			scanf("%c%d", &code[i], &score[i]);			//collecting codes and scores
			getchar();			//clearing the buffer

			while (score[i] < 0 || score[i] > 100) {
				printf("\nThe number is out of range\n");
				printf("Enter the score again (from 0 to 100) : ");
				scanf("%d", &score[i]);
				printf("\n");
				getchar();		//clearing the buffer
				
			}
		}

		num = sizeof(score) / sizeof(score[0]);		//calculating the number of inputs
		print_graph(&score, &code, num);					//using the address of the array instead of a pointer
	}
	return 0;
}

void print_graph(int *ps, char *pc, int size) {		//printing out a graph of the students' codes and scores
	int i, j, stars;

	printf("\nThe five scores in order of input : \n");
	printf("(For every 5 points, a star is given)\n\n");
	for (i = 0; i < size; i++) {
		stars = ps[i] / 5;						//figuring out how many starts to give
		printf("%c : (%3d) ", pc[i], ps[i]);	//pc = code pointer, ps = score pointer
		for (j = 0; j < stars; j++) {
			printf("*");
		}
		printf("\n");
	} printf("\n");
}
