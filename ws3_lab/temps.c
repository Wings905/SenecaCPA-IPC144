/*
NAME: Tracy Nguyen
EMAIL: tnguyen157@myseneca.ca
STUDENT #: 127270171
CLASS: IPC 144 - SQQ
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 3

int main(void)
{
   printf("---=== IPC Temperature Analyzer ===---\n");
   int high;
   int low;
   int day;
   float total = 0;
   int highest = -41;
   int lowest = 41;
   int highday;
   int lowday;
   for (day = 1; day < NUMS + 2; ++day)
   {
      printf("Enter the high value for day %d: ", day);
      scanf("%d", &high);
      printf("\nEnter the low value for day %d: ", day);
      scanf("%d", &low);
      while (high > 40 || low < -40 || high <= low)
      {
         printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
         printf("\nEnter the high value for day %d: ", day);
         scanf("%d", &high);
         printf("\nEnter the low value for day %d: ", day);
         scanf("%d", &low);
      }
      if (high > highest)
      {
         highest = high;
         highday = day;
      }
      if (low < lowest)
      {
         lowest = low;
         lowday = day;
      }
      total = total + high + low;
      printf("\n");
   }
   float average = total / 8;
   printf("The average (mean) temperature was: %.2f\n", average);
   printf("The highest temperature was %d, on day %d\n", highest, highday);
   printf("The lowest temperature was %d, on day %d\n", lowest, lowday);
   return 0;
}