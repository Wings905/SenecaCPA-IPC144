/* -------------------------------------------

Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: March 2018

----------------------------------------------

Assignment: 2
Milestone:  2

---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


#include "contactHelpers.h"


//------------------------------------------------------

// Function Definitions

//------------------------------------------------------



// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+



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

    scanf("%c%c", &oneChar, &newline);

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
    printf("5. Search contacts by cell phoe number\n");
    printf("6. Sort contact by cell phone number\n");
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
            printf("\n<<< Feature 1 is unavailable >>>\n\n");
            break;

        case 2:
            printf("\n<<< Feature 2 is unavailable >>>\n\n");
            break;

        case 3:
            printf("\n<<< Feature 3 is unavailable >>>\n\n");
            break;

        case 4:
            printf("\n<<< Feature 4 is unavailable >>>\n\n");
            break;

        case 5:
            printf("\n<<< Feature 5 is unavailable >>>\n\n");
            break;

        case 6:
            printf("\n<<< Feature 6 is unavailable >>>\n\n");
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