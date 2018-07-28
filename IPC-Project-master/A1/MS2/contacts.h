/* -------------------------------------------
Name: Tracy Nguyen 
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: March 26, 2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name 
{
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration

struct Address 
{
    int streetNumber;
    char street[40];
    int apartmentNumber;
    char postalCode[8];
    char city[40];

};

// Structure type Numbers declaration

struct Numbers
{
    char cell[20];
    char home[20];
    char business[20];
};

// Contact declaration

struct Contact
{
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};

// Receive name

void getName(Name *)
{
    printf("Pleae enter the contact's first name: ");
    if (answer == 'Y' | answer == 'y')
    {
         printf("Please enter the contact's middle initial(s): ");
    }
    printf("Please enter the contact's last name: ");

}