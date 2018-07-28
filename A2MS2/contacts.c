/* -------------------------------------------

Name: Tracy Nguyen
Student number: 1270270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: March 2018

----------------------------------------------

Assignment: 2
Milestone:  1

---------------------------------------------- */



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


#include "contacts.h"


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// Variable
int answer;

// getName:
void getName(struct Name *contactname);

void getName(struct Name* contactName)
{
    printf("Please enter the contact's first name: ");
    scanf("%s", contactName->firstName);

    printf("Do you want to enter a middle initial(s)? (y or n): ");
    getchar();
    answer = yes();

    if (answer == 1)
    {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%s", contactName->middleInitial);
    }

    printf("Please enter the contact's last name: ");
    scanf("%s", contactName->lastName);

    return;
}



// getAddress:

void getAddress(struct Address *contactaddress);

void getAddress(struct Address *contactaddress)
{
    printf("Please enter the contact's street number: ");
    contactaddress->streetNumber = getInt();

    printf("Please enter the contact's street name: ");
    scanf("%s", &contactaddress->street);

    printf("Do you want to enter an apartment number? (y or n): ");
    getchar();
    answer = yes();
    
    if (answer == 1)
    {
        printf("Please enter the contact's apartment number: ");
        contactaddress->apartmentNumber = getInt();
    }

    printf("Please enter the contact's postal code: ");
    scanf("\n%[^\n]", contactaddress->postalCode);

    printf("Please enter the contact's city: ");
    scanf("%s", contactaddress->city);

    return;
}



// getNumbers:

void getNumbers(struct Numbers *contactnums);

void getNumbers(struct Numbers *contactnums)
{
    printf("Please enter the contact's cell phone number: ");
    scanf("\n%s", contactnums->cell);

    printf("Do you want to enter a home phone number? (y or n): ");
    getchar();
    answer = yes();

    if (answer == 1)
    {
        printf("Please enter the contact's home phone number: ");
        scanf("\n%s", contactnums->home);
    }

    printf("Do you want to enter a business phone number? (y or n): ");
    answer = yes();

    if (answer == 1)
    {
        printf("Please enter the contact's business phone number: ");
        scanf("\n%s", contactnums->business);
    }

    return;
}


// getContact
// Define Empty function definition below:

void getContact(struct Contact *contactptr)
{
    
    getName(&contactptr->name);
    getAddress(&contactptr->address);
    getNumbers(&contactptr->numbers);

    return;
}