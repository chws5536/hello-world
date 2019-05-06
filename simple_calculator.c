#include <stdio.h>

int main() {
  //declare variables
	int op1, op2, res, b = 1, i;
	char opt, ary[8];
	while (b) {
		printf("This calcuator only works with whole numbers using +, -, *, and / \n");
		printf("Enter the equation : ");
		scanf("%d%c%d", &op1, &opt, &op2);
		
    //calculating
		if (opt == '+' || opt == '-' || opt == '/' || opt == '*') {
			if (opt == '+') {
				res = op1 + op2;
			}
			else if (opt == '-') {
				res = op1 - op2;
			}
			else if (opt == '*') {
				res = op1 * op2;
			}
			else if (opt == '/') {
				res = op1 / op2;
			}
			printf("%d %c %d = %d\n\n", op1, opt, op2, res);
		}
		else {
			printf("\nYou entered a wrong operator\nPlease enter the correct operator\n\n");
		}
    
    //printing out the result
		printf("If you wish to quit, please type in \"quit\" ");
		printf("(Type in \"no\" to continue) : ");
		scanf("%s", ary);
		if (ary[0] == 'q' && ary[1] == 'u' && ary[2] == 'i' && ary[3] == 't' && ary[4] == '\0') {
			b = 0;
		}
    printf("\n");
	}
	return 0;
}
