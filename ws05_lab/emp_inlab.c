/*

Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Workshop: 05
Section: SQQ

*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2

int main(void)
{

	int option = 0;
	int i = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");

	struct emp
	{
		int ID_Number;
		int age;
		double salary;
	};

	struct emp Employee[SIZE] = {{ 0 }};

	do
	{

		// Print the option list

		printf("1. Display Employee Information\n");

		printf("2. Add Employee\n");

		printf("0. Exit\n\n");

		printf("Please select from the above options: ");

		// Capture input to option variable

		scanf("%d", &option);
		printf("\n");
        
		switch (option) {

		case 0:	// Exit the program
			printf("\n");
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: // Display Employee Data

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i <= SIZE; i++)
			{
				if (Employee[i].ID_Number > 0 || Employee[i].age >= 14 || Employee[i].salary > 0) // Employee data is invalid if employee ID is not positive
				{
					printf("%6d%9d%11.2lf", Employee[i].ID_Number, Employee[i].age, Employee[i].salary);
					printf("\n");
				}
			}

			printf("\n");
			i = 0;
			break;

		case 2:	// Adding Employee

			printf("Adding Employee\n");
			printf("===============\n");

			if (i < SIZE) // Check to see if there is anymore employees
			{
				printf("Enter Employee ID: ");
				scanf("%d", &Employee[i].ID_Number);
				if (Employee[i].ID_Number < 0) // Invalid employee ID
				{
					printf("Invalid Employee ID. Try again: ");
					scanf("%d", &Employee[i].ID_Number);
				}

				printf("Enter Employee Age: ");
				scanf("%d", &Employee[i].age);
				if (Employee[i].age < 14) // Invalid employee age
				{
					printf("Invalid age. Try again: ");
					scanf("%d", &Employee[i].age);
				}

				printf("Enter Employee Salary: ");
				scanf("%lf", &Employee[i].salary);
				if (Employee[i].salary < 0) // Invalid employee salary
				{
					printf("Invalid salary. Try again: ");
					scanf("%lf", &Employee[i].salary);
				}
				printf("\n");
			}
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}
			i++; // The next time case 2 is accessed, the next element will be used
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");

		}


	} while (option != 0);

	return 0;
}