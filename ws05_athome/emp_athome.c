/*

Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Workshop: 05
Section: SQQ

*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

int main(void)
{
    int option = 0;
    int i;
    int empID = 0;
    int addInt = 0;
    char retryAnswer = 'x';
    int done = 0;

    struct emp
    {
        int ID_Number;
        int age;
        double salary;
    };

    struct emp Employee[SIZE] = { { 0 } };


    printf("---=== EMPLOYEE DATA ===---\n\n");

    do
    {

        // Print the option list

        printf("1. Display Employee Information\n");

        printf("2. Add Employee\n");

        printf("3. Update Employee Salary\n");

        printf("4. Remove Employee\n");

        printf("0. Exit\n\n");

        printf("Please select from the above options: ");

        // Capture input to option variable

        scanf("%d", &option);
        printf("\n");

        switch (option) {

        case 0:	// Exit the program

            printf("Exiting Employee Data Program. Good Bye!!!\n");
            break;

        case 1: // Display Employee Data

            printf("EMP ID  EMP AGE EMP SALARY\n");
            printf("======  ======= ==========\n");

            for (i = 0; i < SIZE; i++)
            {
                if (Employee[i].ID_Number > 0 || Employee[i].age >= 14 || Employee[i].salary > 0) // Employee data is invalid if employee ID is not positive
                {
                    printf("%6d%9d%11.2lf", Employee[i].ID_Number, Employee[i].age, Employee[i].salary);
                    printf("\n");
                }
            }

            printf("\n");

            break;

        case 2:	// Adding Employee

            printf("Adding Employee\n");
            printf("===============\n");

            if (addInt < SIZE) // Check to see if there is anymore employees
            {
                printf("Enter Employee ID: ");
                scanf("%d", &Employee[addInt].ID_Number);
                while (Employee[addInt].ID_Number < 1) // Invalid employee ID
                {
                    printf("Invalid Employee ID. Try again: ");
                    scanf("%d", &Employee[addInt].ID_Number);
                }

                printf("Enter Employee Age: ");
                scanf("%d", &Employee[addInt].age);
                while (Employee[addInt].age < 14) // Invalid employee age
                {
                    printf("Invalid age. Try again: ");
                    scanf("%d", &Employee[addInt].age);
                }

                printf("Enter Employee Salary: ");
                scanf("%lf", &Employee[addInt].salary);
                while (Employee[addInt].salary < 0) // Invalid employee salary
                {
                    printf("Invalid salary. Try again: ");
                    scanf("%lf", &Employee[addInt].salary);
                }

                addInt++; // The next time case 2 is accessed, the next element will be used
                printf("\n");
            }

            else
            {
                printf("ERROR!!! Maximum Number of Employees Reached\n\n");
            }

            break;

        case 3:

            printf("Update Employee Salary\n");
            printf("======================\n");

            do
            {
                do
                {

                    printf("Enter Employee ID: ");
                    scanf("%d", &empID);

                    for (i = 0; empID != Employee[i].ID_Number && i < SIZE && empID > 0; i++)   // manually search for the matching elements
                    {

                    }

                    if (empID == Employee[i].ID_Number)
                    {

                        printf("The current salary is %.2lf\n", Employee[i].salary);

                        printf("Enter Employee New Salary: ");
                        scanf("%lf", &Employee[i].salary);
                    }

                    if (empID != Employee[i].ID_Number)
                    {
                        printf("Employee ID not found!\n");
                        printf("Retry (Y/N)? ");
                        scanf(" %c", &retryAnswer);     // In the case user accidentally entered this option but has not added any employees
                        printf("\n");
                    }

                } while (retryAnswer == 'y' || retryAnswer == 'Y');

                if (retryAnswer == 'n' || retryAnswer == 'N')
                {
                    done = 1;
                }


                retryAnswer = 'x';
                printf("\n");

            } while (empID != Employee[i].ID_Number && done != 1);

            break;

        case 4:

            printf("Remove Employee\n");
            printf("===============\n");

            do
            {
                do
                {

                    printf("Enter Employee ID: ");
                    scanf("%d", &empID);

                    for (i = 0; empID != Employee[i].ID_Number && i < SIZE && empID > 0; i++)  // manually search for matching elements
                    {

                    }

                    if (empID != Employee[i].ID_Number)
                    {
                        printf("Employee ID not found!\n");
                        printf("Retry (Y/N)? ");              // In the case user accidentally entered this option but has not added any employees
                        scanf(" %c", &retryAnswer);
                        printf("\n");
                    }

                    if (empID == Employee[i].ID_Number)
                    {
                        Employee[i].ID_Number = 0;
                        Employee[i].age = 0;
                        Employee[i].salary = 0;

                        printf("Employee %d will be removed", empID);
                        printf("\n\n");
                    }

                } while (retryAnswer == 'Y' || retryAnswer == 'y');

                if (retryAnswer == 'n' || retryAnswer == 'N')
                {
                    done = 1;
                }

                retryAnswer = 'x';

            } while (Employee[i].ID_Number != 0 && done != 1);

            if (Employee[i].ID_Number == 0) // Statement added in case user leaves case by saying "no" under retry
            {
                addInt--;
            }

            break;

        default:

            printf("ERROR: Incorrect Option: Try Again\n\n");
        }


    } while (option != 0);

    return 0;
}