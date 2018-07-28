/*
NAME: Tracy Nguyen
EMAIL: tnguyen157@myseneca.ca
ID NUMBER: 127270171
SECTION: IPC 144 SQQ
WORKSHOP: Four (04)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int days;
	int highTemp[9] = { 0 };
	int lowTemp[9] = { 0 };
	int i;
	int highestTemp = -41;        // Assuming the range is from -40 to 40
	int highDay;
	int lowestTemp = 41;
	int lowDay;
	int dayAverage;
	float average;
	int tempTotal = 0;
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);
	while (days < 3 || days > 10)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
	}
	printf("\n");
	for (i = 0; i < days; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &highTemp[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &lowTemp[i]);
		if (highTemp[i] < lowTemp[i])
		{
			printf("Incorrect values. High must be greater than low.\n\n");
			printf("Day %d - High: ", i + 1);
			scanf("%d", &highTemp[i]);
			printf("Day %d - Low: ", i + 1);
			scanf("%d", &lowTemp[i]);
		}
		if (highTemp[i] > highestTemp)
		{
			highestTemp = highTemp[i];
			highDay = i + 1;
		}
		if (lowTemp[i] < lowestTemp)
		{
			lowestTemp = lowTemp[i];
			lowDay = i + 1;
		}
	}

	printf("\nDay High Low\n");
	for (i = 0; i < days; i++)
	{
		printf("%d %3d %3d\n", i + 1, highTemp[i], lowTemp[i]);
	}
	printf("\n");
	printf("The highest temperature was %d, on day %d\n", highestTemp, highDay);
	printf("The lowest temperature was %d, on day %d\n", lowestTemp, lowDay);
	do
	{
		printf("\n");
		printf("Enter a number between 1 and %d to see the average for the entered number of days, enter a negative number to exit: ", days);
		scanf("%d", &dayAverage);
		if (dayAverage >= 0)
		{
			while (dayAverage > days || dayAverage == 0)
			{
				printf("\n");
				printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", days);
				scanf("%d", &dayAverage);
			}
			if (dayAverage >= 0)
			{
				for (i = 0; i < dayAverage; i++)
				{
					tempTotal = tempTotal + highTemp[i] + lowTemp[i];
				};
				average = (float)tempTotal / ((float)dayAverage * 2);
				printf("\n");
				printf("The average temperature up to day %d is: %.2f", dayAverage, average);
				tempTotal = 0;
			}
		}
		printf("\n");
	} while (dayAverage >= 1);
	printf("Goodbye!\n");
	return 0;
}
