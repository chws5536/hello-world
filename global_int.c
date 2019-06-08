#include <stdio.h>

void input_data(int * pa, int * pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void) {
	
	while (1) {
		input_data(&a, &b);
		swap_data();
		print_data(a, b);
	}
	return 0;
}

void input_data(int * pa, int * pb) {
	printf("Enter two numbers : ");
	scanf("%d%d", pa, pb);
}
void swap_data(void) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void print_data(int a, int b) {
	printf("%d %d\n\n", a, b);
}
