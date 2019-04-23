#include <stdio.h>

int main(void) {
	int i, age, *page = &age;
	char name[80] = { 0 };

	printf("Hello, User\n\n");
	printf("What is your name? : ");
	for (i = 0; i < 20; i++) {
		scanf("%c", &name[i]);
		if (name[i] == '\n') {
			name[i] = '\0';
			break;
		}
	}
	/*if (name[18] != '\n') {
		name[19] = '\0';
		printf("\nYou have a really long name.\n");
	}*/
	printf("\nNice to meet you, ");
	for (i = 0; i < 20; i++) {
		printf("%c", name[i]);
		if (name[i] == '\0') {
			break;
		}
	}
	printf("\n\nHow old are you ? : ");
	scanf("%d", &age);
	printf("\nAre you excited to be %d years old next year?\n\n", (*page) + 1);
	return 0;
}
