#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100] = { 0 }, str1[100] = { 0 };
	int size;
	size = sizeof(str1) / sizeof(str1[0]);

	printf("Enter origial : ");
	scanf("%s", str);
	getchar();
	printf("Original : %s\n\n", str);

	while (1) {
		printf("Enter updated : ");
		fgets(str1, size, stdin);
		str1[strlen(str1) - 1] = '\0';
		if (strcmp(str1, "end") == 0) break;
		strcat(str, " ");
		strcat(str, str1);
		printf("Updated : %s\n\n", str);
	}
	return 0;
}
