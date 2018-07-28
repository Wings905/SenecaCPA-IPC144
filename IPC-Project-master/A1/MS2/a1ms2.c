/* -------------------------------------------
Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: March 2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

int main(void)
{
    // Declare variables here:
    struct Name contactName = { ' ', ' ', ' ' };
    struct Address contactAddress = { 0, ' ', 0, ' ', ' ' };
    struct Numbers contactNumber = { ' ', ' ', ' ' };
    char answer;
    
    // Display the title
    printf("Contact Management System\n");
    printf("-------------------------\n");


    // Contact Name Input:
    printf("Please enter the contact's first name: ");
    scanf(" %s", contactName.firstName);
    
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
    {
        printf("Please enter the contact's middle initial(s): ");
        scanf(" %s", contactName.middleInitial);
    }
    
    printf("Please enter the contact's last name: ");
    scanf(" %s", contactName.lastName);

    // Contact Address Input:
    printf("Please enter the contact's street number: ");
    scanf(" %d", &contactAddress.streetNumber);
    
    printf("Please enter the contact's street name: ");
    scanf(" %[^\n]", contactAddress.street);
   
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
    {
        printf("Please enter the contact's apartment number: ");
        scanf(" %d", &contactAddress.apartmentNumber);
    }
    
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", contactAddress.postalCode);

    printf("Please enter the contact's city: ");
    scanf(" %[^\n]", contactAddress.city);

    // Contact Numbers Input:

    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        printf("Please enter the contact's cell phone number: ");
        scanf(" %s", contactNumber.cell);
    }

    printf("Do you want to enter a home phone number? (y or n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
    {
        printf("Please enter the contact's home phone number: ");
        scanf(" %s", contactNumber.home);
    }

    printf("Do you want to enter a business phone number? (y or n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
    {
        printf("Please enter the contact's business phone number: ");
        scanf(" %s", contactNumber.business);
    }

    // Display Contact Summary Details

    printf("\nContact Details\n");
    printf("---------------\n");
    printf("Name Details\n");
    printf("First name: %s\n", contactName.firstName);
    printf("Middle initial(s): %s\n", contactName.middleInitial);
    printf("Last name: %s\n", contactName.lastName);

    printf("\nAddress Details\n");
    printf("Street number: %d\n", contactAddress.streetNumber);
    printf("Street name: %s\n", contactAddress.street);
    printf("Apartment: %d\n", contactAddress.apartmentNumber);
    printf("Postal code: %s\n", contactAddress.postalCode);
    printf("City: %s\n", contactAddress.city);

    printf("\nPhone Numbers:\n");
    printf("Cell phone number: %s\n", contactNumber.cell);
    printf("Home phone number: %s\n", contactNumber.home);
    printf("Business phone number: %s\n", contactNumber.business);

    printf("\nStructure test for Name, Address, and Numbers Done!\n");

    // Display Completion Message



    return 0;
}