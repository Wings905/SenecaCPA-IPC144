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
   for (day = 1; day < NUMS + 1; ++day)
   {
      printf("Enter the high value for day %d: ", day);
      scanf("%d", &high);
      printf("Enter the low value for day %d: ", day);
      scanf("%d", &low);
      while (high > 40 || low < -40 || high < low)
      {
         printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
         printf("Enter the high value for day %d: ", day);
         scanf("%d", &high);
         printf("Enter the low value for day %d: ", day);
         scanf("%d", &low);
      }
      int total = 0;
      total = total + high + low;
   }
   float average = (high + low) / 6;
   printf("The average (mean) temperature was: %.2f", average);

   return 0;
}