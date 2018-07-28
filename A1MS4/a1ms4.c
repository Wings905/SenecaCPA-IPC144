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


int main(void)

{

    // Declare variables here:



    // Create a variable of type Contact and call it something self-describing like "contact"
    // - HINT: Be sure to initialize the values to 0 and empty C strings

    struct Contact contactInfo = { {" ", " ", " "}, {0, " ", 0, " ", " "}, {" ", " ", " "} };

    // Display the title

    printf("Contact Management System\n");
    printf("-------------------------\n");

    // Call the Contact function getName to store the values for the Name member

    getName(&contactInfo.name);

    // Call the Contact function getAddress to store the values for the Address member

    getAddress(&contactInfo.address);

    // Call the Contact function getNumbers to store the values for the Numbers member

    getNumbers(&contactInfo.numbers);

    // Display Contact summary details

    /*printf("Contact Details\n");
    printf("---------------\n");
    printf("Name Details\n");
    printf("First name: %s\n", contactInfo.name.firstName);
    printf("Middle initial(s): %s\n", contactInfo.name.middleInitial);
    printf("Last name: %s\n\n", contactInfo.name.lastName);

    printf("Address Details\n");
    printf("Street number: %d\n", contactInfo.address.streetNumber);
    printf("Street name: %s\n", contactInfo.address.street);
    printf("Apartment: %d\n", contactInfo.address.apartmentNumber);
    printf("Postal code: %s\n", contactInfo.address.postalCode);
    printf("City: %s\n\n", contactInfo.address.city);

    printf("Phone Numbers:\n");
    printf("Cell phone number: %s\n", contactInfo.numbers.cell);
    printf("Home phone number: %s\n", contactInfo.numbers.home);
    printf("Business phone number: %s\n\n", contactInfo.numbers.business); */

    printName(&contactInfo.name);
    
   
    // Display Completion Message

    printf("Structure test for Contact using functions done!\n");


    return 0;

}

