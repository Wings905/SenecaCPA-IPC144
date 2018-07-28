/*
      Name: Tracy Nguyen
      Student #: 127270171
      Class Section: SQQ
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Write your code below:

int main(void)
{
   double due;
   printf("Please enter the amount to be paid: $");
   scanf("%lf", &due);
   printf("GST: 1.13\n");
   float totaldue = due * 1.13 + 0.005;
   printf("Balance owing: $%.2lf\n", totaldue);
   totaldue = totaldue * 100;                                                                      // Multiplied by 100 to be able to work with modulous
   int loonies = totaldue / 100;
   float remainder = totaldue / 100 - loonies;                                                     // I had to divide here then multiply by 100 on the next line so that I can subtract the # of loonies with its' actual value
   remainder = remainder * 100;                                                                    
   printf("Loonies required: %d, balance owing $%.2f\n", loonies, (float)remainder / 100);
   int quarters = (remainder / 100) / 0.25;
   int remainder2 = (int)remainder % 25;
   printf("Quarters required: %d, balance owing $%.2f\n", quarters, (float)remainder2 / 100);
   int dimes = ((float)remainder2 / 100) / 0.1;
   int remainder3 = (int)remainder2 % 10;
   printf("Dimes required: %d, balance owing $%.2f\n", dimes, (float)remainder3 / 100);
   int nickels = ((float)remainder3 / 100) / 0.05;
   int remainder4 = (int)remainder3 % 5;
   printf("Nickels required: %d, balance owing $%.2f\n", nickels, (float)remainder4 / 100);
   float pennies = ((float)remainder4 / 100) / 0.01;                                               //I put pennies as a float because whatever data is "truncated" from the value that results from the following would essentially be all the data there is
   int remainder5 = (int)remainder4 % 1;
   printf("Pennies required: %1.0f, balance owing $%.2f\n", pennies, (float)remainder5 / 100);
   return 0;
}