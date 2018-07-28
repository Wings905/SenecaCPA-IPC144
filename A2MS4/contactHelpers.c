/* -------------------------------------------

Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: April 2018

----------------------------------------------

Assignment: 2
Milestone:  4

---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:

#include "contactHelpers.h"
#include "contacts.h"

// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):

#define MAXCONTACTS 5

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------


// clearKeyboard function definition 

void clearKeyboard(void)
{
    while (getchar() != '\n');
    return;
}



// pause function definition goes here:

void pause(void)
{
    printf("(Press Enter to Continue)");
    clearKeyboard();
    return;
}


// getInt function definition goes here:

int getInt(void)
{
    int testInt;
    char newline;

    scanf("%d%c", &testInt, &newline);

    while (newline != '\n')
    {
        clearKeyboard();
        printf("*** INVALID INTEGER *** <Please enter an integer>: ");
        scanf("%d%c", &testInt, &newline);
    }

    return testInt;
}




// getIntInRange function definition goes here:

int getIntInRange(int lowerBnd, int higherBnd)
{
    int intInBnd;

    intInBnd = getInt();

    while ((intInBnd < lowerBnd) || (intInBnd > higherBnd))
    {
        printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", lowerBnd, higherBnd);
        intInBnd = getInt();
    }

    return intInBnd;
}




// yes function definition goes here:

int yes(void)
{
    char oneChar;
    char newline;
    int validChar;

    scanf(" %c%c", &oneChar, &newline);

    while ((oneChar != 'Y' && oneChar != 'y' && oneChar != 'N' && oneChar != 'n') || (newline != '\n'))
    {
        clearKeyboard();
        printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        scanf("%c%c", &oneChar, &newline);
    }

    if ((oneChar == 'Y') || (oneChar == 'y'))
    {
        validChar = 1;
    }

    else
    {
        validChar = 0;
    }

    return validChar;
}




// menu function definition goes here:

int menu(void)
{
    int optionInt;

    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");

    printf("Select an option:> ");
    optionInt = getIntInRange(0, 6);

    return optionInt;
}




// ContactManagerSystem function definition goes here:

void ContactManagerSystem(void)
{
    int optionInt;
    int answer = 2;

    struct Contact contact[MAXCONTACTS] = { { {"Rick", {'\0'}, "Grimes"},
                                   {11, "Trailer Park", 0, "A7A 2J2", "King City"},
                                   {"4161112222", "4162223333", "4163334444"}},
                               {
                                   {"Maggie", "R.", "Greene"},
                                   {55, "Hightop House", 0, "A9A 3K3", "Bolton"},
                                   {"9051112222", "9052223333", "9053334444"} },
                                {
                                    {"Morgan", "A.", "Jones"},
                                    {77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough"},
                                    {"7051112222", "7052223333", "7053334444"} },
                                {
                                    {"Sasha", {'\0'}, "Williams"},
                                    {55, "Hightop House", 0, "A9A 3K3", "Bolton"},
                                    {"9052223333", "9052223333", "9054445555"} },
    };

    do
    {
        optionInt = menu();

        switch (optionInt)
        {
        case 0:
            printf("\nExit the program? (Y)es/(N)o: ");
            answer = yes();
            break;

        case 1:
            displayContacts(contact, MAXCONTACTS);
            break;

        case 2:
            addContact(contact, MAXCONTACTS);
            break;

        case 3:
            updateContact(contact, MAXCONTACTS);
            break;

        case 4:
            deleteContact(contact, MAXCONTACTS);
            break;

        case 5:
            searchContacts(contact, MAXCONTACTS);
            break;

        case 6:
            sortContacts(contact, MAXCONTACTS);
            break;

        default:
            printf("*** OUT OF RANGE *** <Enter a number between 0 and 6>: ");
            scanf("%d", &optionInt);
        }

        if (optionInt != 0)
        {
            pause();
        }

        putchar('\n');

    } while (optionInt != 0 || answer != 1);

    printf("Contact Management System: terminated\n");

    return;
}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 4 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10 chars entered)

void getTenDigits(char telNum[])

{

    int needInput = 1;

    while (needInput == 1)
    {

        scanf(" %10s", telNum);

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

}



// findContactIndex:

int findContactIndex(const struct Contact contact[], int size, const char cellNum[])

{
    int a = -1;
    int i;

    for (i = 0; i < size; i++)
    {
        if (strcmp(contact[i].numbers.cell, cellNum) == 0)
        {
            a = i;
        }
    }

    return a;

}


// displayContactHeader
// Put empty function definition below:

void displayContactHeader(void)
{
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|                              Contacts Listing                               |\n");
    printf("+-----------------------------------------------------------------------------+\n");

    return;
}


// displayContactFooter
// Put empty function definition below:

void displayContactFooter(int contactTotal)
{
    printf("+-----------------------------------------------------------------------------+\n");
    printf("Total contacts: %d\n\n", contactTotal);
    return;
}


// displayContact:
// Put empty function definition below:

void displayContact(const struct Contact* contactInfo)
{
    char fullName[77] = { '\0' };

    // Full name
    if (strlen(contactInfo->name.firstName) != 0)
    {
        strcat(fullName, contactInfo->name.firstName);

        if (strlen(contactInfo->name.middleInitial) != 0)
        {
            strcat(fullName, " ");
            strcat(fullName, contactInfo->name.middleInitial);
        }

        strcat(fullName, " ");
        strcat(fullName, contactInfo->name.lastName);


        printf(" %s\n", fullName);
        printf("    C: %-10s   H: %-10s   B: %-10s\n", contactInfo->numbers.cell, contactInfo->numbers.home, contactInfo->numbers.business);
        printf("       %d %s, ", contactInfo->address.streetNumber, contactInfo->address.street);

        //apt number
        if (contactInfo->address.apartmentNumber > 0)
        {
            printf("Apt# %d, ", contactInfo->address.apartmentNumber);
        }

        printf("%s, %s\n", contactInfo->address.city, contactInfo->address.postalCode);
    }

    return;
}



// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact[], int);

void displayContacts(const struct Contact contact[], int size)
{

    putchar('\n');
    displayContactHeader();

    int i;
    int num = 0;

    for (i = 0; i < size; i++)
    {
        if (strlen(contact[i].numbers.cell) > 0)
        {
            displayContact(&contact[i]);
            num++;
        }
    }

    displayContactFooter(num);

    return;
}



// searchContacts:
// Put empty function definition below:

void searchContacts(const struct Contact contact[], int size)
{
    char numSearch[11];
    int a;

    printf("\nEnter the cell number for the contact: ");
    getTenDigits(numSearch);

    a = findContactIndex(contact, size, numSearch);

    if (a != -1)
    {
        putchar('\n');
        displayContact(&contact[a]);
        putchar('\n');
    }
    else
    {
        printf("*** Contact NOT FOUND ***\n");
    }

    return;
}


// addContact:
// Put empty function definition below:

void addContact(struct Contact contact[], int size)
{
    int i;
    int a = -1;

    for (i = 0; i < size; i++)
    {
        if (strlen(contact[i].numbers.cell) == 0)
        {
            a = i;
        }
    }

    if (a != -1)
    {
        putchar('\n');
        getContact(&contact[a]);
        printf("--- New contact added! ---\n");
    }

    else
    {
        printf("\n*** ERROR: The contact list is full! ***\n");
    }

    return;
}


// updateContact:
// Put empty function definition below:

void updateContact(struct Contact contact[], int size)
{
    char cell[11];
    int a;


    printf("\nEnter the cell number for the contact: ");
    getTenDigits(cell);
    a = findContactIndex(contact, size, cell);

    if (a != -1)
    {
        printf("\nContact found:\n");
        displayContact(&contact[a]);

        putchar('\n');

       
        printf("Do you want to update the name? (y or n): ");
        if (yes())
        {
            getName(&contact[a].name);
        }

       
        printf("Do you want to update the address? (y or n): ");
        if (yes())
        {
            getAddress(&contact[a].address);
        }

        
        printf("Do you want to update the numbers? (y or n): ");
        if (yes())
        {
            getNumbers(&contact[a].numbers);
        }
        
        printf("--- Contact Updated! ---\n");

    }

    else
    {
        printf("*** Contact NOT FOUND ***\n");
    }

    return;
}


// deleteContact:
// Put empty function definition below:

void deleteContact(struct Contact contact[], int size)
{
    char cell[11];
    int a;

    printf("\nEnter the cell number for the contact: ");
    getTenDigits(cell);

    a = findContactIndex(contact, size, cell);

    if (a != -1)
    {
        printf("\nContact found:\n");
        displayContact(&contact[a]);

        putchar('\n');

        printf("CONFIRM: Delete this contact? (y or n): ");
        if (yes())
        {
            strcpy(&contact[a].numbers.cell[0], "\0");
            printf("--- Contact deleted! ---\n");
        }
    }

    else
    {
        printf("*** Contact NOT FOUND ***\n");
    }

    return;
}

// sortContacts:
// Put empty function definition below:

void sortContacts(struct Contact contact[], int size)
{

    // Incomplete

    /*
    int i;
    int j;
    int compare;
    char temp[11] = { '\0' };

    for (i = 0; i < size; i++)
    {
        compare = strcmp(*contact[i].numbers.cell, *contact[i + 1].numbers.cell);
        if (compare > 0)
        {
            strcat(temp, *contact[i].numbers.cell);

            for (j = 0; j < size; j++)
            {
                *contact[i].numbers.cell = *contact[i + j + 1].numbers.cell;
            }
        }

    }
    */

    printf("\n--- Contacts sorted! ---\n");

    return;
}