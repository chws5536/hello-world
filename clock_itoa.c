#include <stdio.h>
#include <stdlib.h>

void set(int h, int m);
void show(void);
void move(void);

int hour, minute, h2;
char str[20], str2[20];

int main(void) {

	while (1) {
		set(hour, minute);
		show();
		move();
		show();
	}

	return 0;
}

void set(int h, int m) {
	printf("Enter a time (2400) : ");
	scanf("%d%d", &h, &m);
	hour = h; minute = m;
}
void show(void) {
	h2 = hour;

	if (hour >= 12 && hour <= 23) {
		if (hour > 12) h2 -= 12;
		itoa(h2, str, 10);
		if (str[1] == '\0') {
			str[1] = str[0];
			str[0] = '0';
		}
		itoa(minute, str2, 10);
		if (str2[1] == '\0') {
			str2[1] = str2[0];
			str2[0] = '0';
		}
		printf("The clock is set to %s:%s (%s)\n", str, str2, "PM");
	}
	else {
		if (hour == 24) h2 = 0;
		itoa(h2, str, 10);
		if (str[1] == '\0') {
			str[1] = str[0];
			str[0] = '0';
		}
		itoa(minute, str2, 10);
		if (str2[1] == '\0') {
			str2[1] = str2[0];
			str2[0] = '0';
		}
		printf("The clock is set to %s:%s (%s)\n", str, str2, "AM");
	}
}
void move(void) {
	int rest, pass;

	printf("Enter the number of minutes passed : ");
	scanf("%d", &pass);
	minute += pass;
	if (minute >= 60) {
		rest = minute % 60;
		minute = rest;
		hour++;
	}
}
