#include <stdio.h>

int rec_func(int n);		//declare function

int main() {
	int n, res;				//declare variables

	printf("Enter a number : ");			//receive input for n
	scanf("%d", &n);

	res = rec_func(n);						//save the result in res
	printf("The result : %d", res);

	return 0;
}
//recursive function
int rec_func(int n) {				
	int res = 0;
	if (n == 1) {						//if at the end of the recursive function
		return res + n;					//sum of all (1 ~ n -1) + n
	}
	res = n + rec_func(n-1);			//n + (9) = n + (n + (8)) = n + (n + (n = (7))) ... 
}
