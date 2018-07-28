/* -------------------------------------------

Name: Tracy Nguyen
Student number: 1270270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: April 2018

----------------------------------------------

Assignment: 2
Milestone:  4

---------------------------------------------- */



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


#include "contacts.h"
#include "contactHelpers.h"
#include <string.h>


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+


// getName:
void getName(struct Name *contactname);

void getName(struct Name* contactName)
{

    printf("Please enter the contact's first name: ");
    scanf("%[^\n]%*c", contactName->firstName);

    printf("Do you want to enter a middle initial(s)? (y or n): ");

    if (yes())
    {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%[^\n]%*c", contactName->middleInitial);
    }
    
    else
    {
        strcpy(&contactName->middleInitial[0], "\0");
    }

    printf("Please enter the contact's last name: ");
    scanf("%[^\n]%*c", contactName->lastName);

    return;
}



// getAddress:

void getAddress(struct Address *contactaddress);

void getAddress(struct Address *contactaddress)
{

    printf("Please enter the contact's street number: ");
    contactaddress->streetNumber = getInt();

    printf("Please enter the contact's street name: ");
    scanf("%[^\n]%*c", contactaddress->street);

    printf("Do you want to enter an apartment number? (y or n): ");

    if (yes())
    {
        printf("Please enter the contact's apartment number: ");
        contactaddress->apartmentNumber = getInt();
    }
   
    else
    {
        contactaddress->apartmentNumber = '\0';
    }

    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]%*c", contactaddress->postalCode);

    printf("Please enter the contact's city: ");
    scanf("%[^\n]%*c", contactaddress->city);

    return;
}



// getNumbers:

void getNumbers(struct Numbers *contactnums);

void getNumbers(struct Numbers *contactnums)
{
    printf("Please enter the contact's cell phone number: ");
    getTenDigitPhone(contactnums->cell);

    printf("Do you want to enter a home phone number? (y or n): ");

    if (yes())
    {
        printf("Please enter the contact's home phone number: ");
        getTenDigitPhone(contactnums->home);
    }
    
    else
    {
        strcpy(&contactnums->home[0], "\0");
    }

    
    printf("Do you want to enter a business phone number? (y or n): ");

    if (yes())
    {
        printf("Please enter the contact's business phone number: ");
        getTenDigitPhone(contactnums->business);
    }
    
    else
    {
        strcpy(&contactnums->business[0], "\0");
    }

    return;
}

//getTenDigitPhone
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;

    while (needInput == 1)
    {
        scanf("%10s", telNum);
        clearKeyboard();

        // (String Length Function: validate entry of 10 characters)
        if (strlen(telNum) == 10)
        {
            needInput = 0;
        }
        
        else
        {
            printf("Enter a 10-digit phone number: ");
        }
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