#include <stdio.h> //printf
#include <string.h> //strcpy

//This converts all of the uppercase letters into lowercase

int main() {
	int i, cnt = 0;
	char ary[101], ary2[] = { 0 }; //ary2[] is for clearing ary[]
	while (1) {
		printf("Please type in your answer within 100 bytes : ");
		gets(ary);		//using gets() to include spacebars in the array

		for (i = 0; i < 101; i++) {
			;
			if (ary[i] >= 65 && ary[i] <= 90) {	//if ary[i]'s ASCII code indicates that it is an uppdercase letter
				ary[i] += 32;					//switching to lowercase
				cnt++;							//counting the number of conversions to lowercase in the string
			}
			if (ary[i] == '\0') {				//if at the end of the string, leave the loop
				break;
			}
		}
		printf("\nConverted to : %s\n", ary);
		printf("The total number of letters : %d\n", i);
		printf("The number of letters changed to lowercase : %d letters\n\n", cnt);
		strcpy(ary, ary2);						//clear ary1[] with zeros
	}
	return 0;
}
