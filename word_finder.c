#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100], str2[100];
	char * pstr, * pstr2 = str2;
	int cnt = 0, size, i, num, len;

	size = sizeof(str) / sizeof(str[0]);

	printf("Enter a sentence : ");
	fgets(str, size, stdin);
	len = strlen(str);
	str[strlen(str) - 1] = '\0';
	
	while (1) {
		pstr = str;
		printf("Enter a string (\"end\" to quit) : ");
		fgets(str2, size, stdin);
		if (strcmp(pstr2, "end\n") == 0) break;
		len = strlen(str2);
		str2[len - 1] = '\0'; 
		len -= 1;
		printf("result : ");
		for (i = 0; i < size; i++) {
			num = strncmp(pstr, pstr2, len);
			if (num == 0) {
				cnt++;
				pstr += len;
			}
			else if (*pstr == '\0') break;
			else pstr++;
		}
		printf("%d\n\n", cnt);
		cnt = 0;
	}
	return 0;
}
