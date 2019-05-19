#include <stdio.h>
#include <string.h>

int main() {
	//declare necessary variables
	int year, month, date, selected_y, selected_m, days, cnt, remainder, x, remainder2, zero, cnt2, b = 1;
	char dayoftheweek[4] = { 0 };

	//figure out which year's calendar to look up
	while (1) {
		printf("Please enter the year and the month you want to look up (enter zero to quit) : ");
		scanf("%d", &zero);
		if (zero == 0) {
			exit(0);

			//the value for selected_m remains in the buffer
		}
		else {
			selected_y = zero;
			scanf("%d", &selected_m);		//value from line 12 is inserted in here; this portion is done automatically

			//redo the input if the inputs are out of range
			while (zero < 0 || selected_m <= 0 || selected_m > 12) {
				printf("Your input(s) is/are incorrect. Please try again\n");
				printf("Please enter the year and the month you want to look up (enter zero to quit) : ");
				scanf("%d", &zero);
				if (zero == 0) {
					exit(0);
				}
				else {
					selected_y = zero;
					scanf("%d", &selected_m);		//value from line 26 is inserted in here; this portion is done automatically
				}
			}
		}
		getchar();
		printf("\n");

		cnt = 0;
		//counting up to the last day of the year before the selected_y
		for (year = 1; year < selected_y; year++) {
			for (month = 1; month <= 12; month++) {
				if (month == 4 || month == 6 || month == 9 || month == 11) {
					days = 30;
				}
				else {
					days = 31;
				}
				if (month == 2) {
					days = 28;
					if (year % 4 == 0) {
						days = 29;
						if (year % 100 == 0) {
							days = 28;
							if (year % 400 == 0) {
								days = 29;
							}
						}
					}
				}
				for (date = 1; date <= days; date++) {
					++cnt;

					//printf("%d-%d-%d\n", year, month, date);
					//printf("%d\n", cnt);							//the total number of days up to 2018.12.31 = 737059
				}
			}
		}

		for (month = 1; month <= selected_m; month++) {
			if (month == 4 || month == 6 || month == 9 || month == 11) {
				days = 30;
			}
			else {
				days = 31;
			}
			if (month == 2) {
				days = 28;
				if (year % 4 == 0) {
					days = 29;
					if (year % 100 == 0) {
						days = 28;
						if (year % 400 == 0) {
							days = 29;
						}
					}
				}
			}
			for (date = 1; date <= days; date++) {
				++cnt;
				if (date == 1) {
					remainder2 = cnt % 7;
				}
				//				printf("%d-%d-%d\n", year, month, date);
				//				printf("%d\n", cnt);							//the total number of days up to 2018.12.31 = 737059
			}
		}

		remainder = cnt % 7;
		printf("      Year %d Month %d\n", selected_y, selected_m);
		printf("    =====================\n");
		printf("------------------------------\n");
		for (remainder = 0; remainder < 7; remainder++) {
			if (remainder > 3) {
				if (remainder == 6) {
					strcpy(dayoftheweek, "SAT");
				}
				else if (remainder == 5) {
					strcpy(dayoftheweek, "FRI");
				}
				else if (remainder == 4) {
					strcpy(dayoftheweek, "THU");
				}
			}
			else
			{
				if (remainder == 3) {
					strcpy(dayoftheweek, "WED");
				}
				else if (remainder == 2) {
					strcpy(dayoftheweek, "TUE");
				}
				else if (remainder == 1) {
					strcpy(dayoftheweek, "MON");
				}
				else if (remainder == 0) {
					strcpy(dayoftheweek, "SUN");
				}
			}
			printf("%4s", dayoftheweek);
		}
		printf("\n");
		printf("------------------------------\n");
		if (remainder2 > 3) {
			if (remainder2 == 6) {
				for (x = 0; x < 6; x++) {
					printf("%4c", ' ');
				}
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 1 && x == 1) {
						printf("\n");
						cnt2 = 0;
					}
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
			else if (remainder2 == 5) {
				for (x = 0; x < 5; x++) {
					printf("%4c", ' ');
				}
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 2 && x == 2) {
						printf("\n");
						cnt2 = 0;
					}
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
			else if (remainder2 == 4) {
				for (x = 0; x < 4; x++) {
					printf("%4c", ' ');
				}
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 3 && x == 3) {
						printf("\n");
						cnt2 = 0;
					}
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
		}
		else
		{
			if (remainder2 == 3) {
				for (x = 0; x < 3; x++) {
					printf("%4c", ' ');
				}
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 4 && x == 4) {
						printf("\n");
						cnt2 = 0;
					}
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
			else if (remainder2 == 2) {
				for (x = 0; x < 2; x++) {
					printf("%4c", ' ');
				}
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 5 && x == 5) {
						printf("\n");
						cnt2 = 0;
					}
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
			else if (remainder2 == 1) {
				printf("%4c", ' ');
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 6 && x == 6) {
						printf("\n");
						cnt2 = 0;
					}
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
			else if (remainder2 == 0) {
				cnt2 = 0;
				for (x = 1; x < date; x++) {
					printf("%4d", x);
					++cnt2;
					if (cnt2 == 7) {
						printf("\n");
						cnt2 = 0;
					}
				}
			}
		}
		printf("\n\n");
	}
	return 0;
}
