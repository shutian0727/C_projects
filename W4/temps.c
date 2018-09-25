
#include<stdio.h>
#define NUMS 4 
int main(void)

{


	int i;
	float high; // high temperature;
	float low; // low temperature;
	int lowest = 0;// lowest temperature;
	int highest = 0;// highest temperature;
	float total = 0.0;  //sum counters;
	float avg; // average value;
	int highest_day;
	int lowest_day;


printf("---=== IPC Temperature Analyzer ===---\n");

for (i = 0; i < NUMS; i++)

{


	printf("Enter the high value for day %d: ", i + 1);
	scanf("%f", &high);
	printf("\n");

	printf("Enter the low value for day %d: ", i + 1);
	scanf("%f", &low);
	printf("\n");

	while ((high < -40 || high > 40) || (low > 40 || low < -40) || (low > high))
	{
		printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");

		printf("Enter the high value for day %d: ", i + 1);
		scanf("%f", &high);
		printf("\n");

		printf("Enter the low value for day %d: ", i + 1);
		scanf("%f", &low);
		printf("\n");

	}
	total = total + high + low;
	if (highest < high)
	{
		highest = high;
		highest_day = i + 1;
	}

	if (lowest > low)
	{
		lowest = low;
		lowest_day = i + 1;
	}
}
avg = total / (NUMS * 2);
printf("The average (mean) temperature was: %.2f\n", avg);
printf("The highest temperature was %d, on day %d\n", highest, highest_day);
printf("The lowest temperature was %d, on day %d\n", lowest, lowest_day);

return 0;
}