/* -------------------------------------------

Name: Tracy Nguyen  
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: March 2018

----------------------------------------------

Assignment: 1
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

//Variable
char answer;

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name *contactname);

void getName(struct Name* contactName)
{
    printf("Please enter the contact's first name: ");
    scanf("%s", &contactName->firstName);
   
    printf("Do you want to enter a middles initial(s)? (y or n): ");
    scanf("\n%c", &answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%s", &contactName->middleInitial);
    }
    
    printf("Please enter the contact's last name: ");
    scanf("%s", &contactName->lastName);

    return;
}





// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:

void getAddress(struct Address *contactaddress);

void getAddress(struct Address *contactaddress)
{
    printf("Please enter the contact's street number: ");
    scanf("%d", &contactaddress->streetNumber);
    
    printf("Please enter the contact's street name: ");
    scanf("%s", &contactaddress->street);

    printf("Do you want to enter an apartment number? (y or n): ");
    scanf("\n%c", &answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("Please enter the contact's apartment number: ");
        scanf("%d", &contactaddress->apartmentNumber);
    }

    printf("Please enter the contact's postal code: ");
    scanf("\n%[^\n]", &contactaddress->postalCode);

    printf("Please enter the contact's city: ");
    scanf("%s", &contactaddress->city);
    
    return;
}






// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:

void getNumbers(struct Numbers *contactnums);

void getNumbers(struct Numbers *contactnums)
{
    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf("\n%c", &answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("Please enter the contact's cell phone number: ");
        scanf("\n%s", &contactnums->cell);
    }

    printf("Do you want to enter a home phone number? (y or n): ");
    scanf("\n%c", &answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("Please enter the contact's home phone number: ");
        scanf("\n%s", &contactnums->home);
    }

    printf("Do you want to enter a business phone number? (y or n): ");
    scanf("\n%c", &answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("Please enter the contact's business phone number: ");
        scanf("\n%s", &contactnums->business);
    }

    void printName(struct Name* name);

    void printName(struct Name* name)
    {
        printf("First name is\n");

        return;
    }
    return;
}