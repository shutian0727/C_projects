/*
Name: Shutian Xu
Section:SQQ
Student ID:1097831
Desc:workshop #4 in_lab
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAXDAYS 10

int main(void)
{


	int i;
	int num = 0;
	int days = 0;
	int highest = 0;
	int lowest = 0;
	int highest_days = 0;
	int lowest_days = 0;
	int low_value[MAXDAYS];// low temperature;
	int high_value[MAXDAYS];// high temperature;
	int total = 0;//sum counters;
	float mean = 0.0;//average value;


	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);
	printf("\n");

	while ((days < 3) || (days > 10))
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive:");
		scanf("%d", &days);
		printf("\n");
	}
	for (i = 0; i < days; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high_value[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low_value[i]);

		if (highest < high_value[i])
		{
			highest = high_value[i];
			highest_days = i + 1;
		}
		if (lowest > low_value[i])
		{
			lowest = low_value[i];
			lowest_days = i + 1;
		}
	}
	printf("\n");
	printf("Day  Hi  Low\n");
	for (i = 0; i < days; i++)
	{
		printf("%d    %d    %d\n", i + 1, high_value[i], low_value[i]);
	}


	printf("\n");
	printf("The highest temperature was %d, on day %d\n", highest, highest_days);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowest_days);
	printf("\n");
	printf("Enter a number between 1 and %d to see the average temperature for the entered "
		"number of days, enter a negative number to exit: ", days);
	scanf("%d", &num);

	while (num >= 0)
	{
		while (num > days || num < 1) {
			printf("\n");
			printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", days);
			scanf("%d", &num);
		}

		for (i = 0; i < num; i++) {
			total = total + high_value[i] + low_value[i];
		
		}
		mean = (float)total / (num * 2);
		total = 0;
		printf("\n");
		printf("The average temperature up to day %d is: %.2f\n", num, mean);
		printf("\n");
		printf("Enter a number between 1 and %d to see the average temperature for the entered " "number of days, enter a negative number to exit: ", days);
		scanf("%d", &num);
	}

	printf("\n");
	printf("Goodbye!\n");
	return 0;
}
