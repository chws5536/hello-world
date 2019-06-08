#include <stdio.h>

int main(void) {
	char ch;

	printf("Enter a word to be changed : ");
	while (1) {
		scanf("%c", &ch);
		if (ch >= 65 && ch <= 90) ch = ch + 32;
		else if (ch >= 97 && ch <= 122) ch = ch - 32;
		printf("%c", ch);
	}


	return 0;
}
