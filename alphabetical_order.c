#include <stdio.h>
#include <string.h>

void alphabetical_order(char str_a, char str_b);

int main(void) {
	char str1[10], str2[10], str3[10];
	int i;

	while (1) {
		printf("Enter three fruits : ");
		scanf("%s", str1);
		scanf("%s", str2);
		scanf("%s", str3);

		alphabetical_order(&str1, &str2, &str3);
	}
	return 0;
}
void alphabetical_order(char * str_a, char * str_b, char * str_c) {
	int num;

	printf("In alphabetical order : ");
	if (strcmp(str_a, str_b) != 0 && strcmp(str_b, str_c) != 0 && strcmp(str_c, str_a) != 0) {
		if ((strcmp(str_a, str_b)) == -1 && (strcmp(str_a, str_c)) == -1) {
			printf("%s, ", str_a);
			if ((strcmp(str_b, str_c)) <= 0) printf("%s, %s\n", str_b, str_c);
			else printf("%s, %s\n", str_c, str_b);
		}
		else if ((strcmp(str_a, str_b)) == 1 && (strcmp(str_c, str_b)) == 1) {
			printf("%s, ", str_b);
			if ((strcmp(str_a, str_c)) <= 0) printf("%s, %s\n", str_a, str_c);
			else printf("%s, %s\n", str_c, str_a);
		}
		else if ((strcmp(str_c, str_b)) == -1 && (strcmp(str_c, str_a)) == -1) {
			printf("%s, ", str_c);
			if ((strcmp(str_a, str_b)) <= 0) printf("%s, %s\n", str_a, str_b);
			else printf("%s, %s\n", str_b, str_a);
		}
	}
	else if (strcmp(str_a, str_b) == 0 || strcmp(str_b, str_c) == 0 || strcmp(str_c, str_a) == 0) {
		if ((strcmp(str_a, str_b)) == 0) {
			if ((strcmp(str_b, str_c)) == -1) printf("%s\, %s, %s\n", str_a, str_b, str_c);
			else printf("%s\, %s, %s\n", str_c, str_b, str_a);
		}
		else if ((strcmp(str_b, str_c)) == 0) {
			if ((strcmp(str_b, str_a)) == -1) printf("%s\, %s, %s\n", str_c, str_b, str_a);
			else printf("%s\, %s, %s\n", str_a, str_b, str_c);
		}
		else if ((strcmp(str_a, str_c)) == 0) {
			if ((strcmp(str_c, str_a)) == -1) printf("%s\, %s, %s\n", str_c, str_a, str_b);
			else printf("%s\, %s, %s\n", str_b, str_a, str_c);
		}
	}
	else printf("%s\, %s, %s\n", str_a, str_b, str_c);
}
