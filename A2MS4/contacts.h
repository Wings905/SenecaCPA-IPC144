// ----------------------------------------------------------------------------
// DO NOT remove the below 2 lines.
// The below two lines is needed to ensure only one copy
// of this header file is included when compiling the project.
// (it is referred to as "safeguarding")
// You will learn about this in C++ (OOP244/BTP200)
// For now, simply leave this code in!
#ifndef CONTACTS_H_
#define CONTACTS_H_
// ----------------------------------------------------------------------------

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


//------------------------------------------------------
// Structure Types
//------------------------------------------------------


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        structures here...                       |
// +-------------------------------------------------+


// Structure type Name declaration

struct Name {

    char firstName[31];
    char middleInitial[7];
    char lastName[36];

};



// Structure type Address declaration
// Place your code here...

struct Address
{
    int streetNumber;
    char street[40];
    int apartmentNumber;
    char postalCode[8];
    char city[40];

};


// Structure type Numbers declaration
// Place your code here...
// NOTE: Modify the C String arrays sizes according to the
//       Assignment-2 Milestone-1 specifications

struct Numbers
{
    char cell[11];
    char home[11];
    char business[11];
};




// Structure type Contact declaration
// NOTE:  Make sure the structure name does not have an 's' on the end!
// Place your code here...


struct Contact
{
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};



//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function prototypes here...              |
// +-------------------------------------------------+


// Get and store from standard input the values for Name
// Place your code here...





// Get and store from standard input the values for Address
// Place your code here...





// Get and store from standard input the values for Numbers
// Place your code here...





// Get and store from standard input the values for a Contact (NOT: Contacts)
// NOTE:  Make sure the structure Contact does not have an 's' on the end!
// Put function prototype below:

void getName(struct Name *contactname);
void getAddress(struct Address *contactaddress);
void getNumbers(struct Numbers *contactnums);
void getContact(struct Contact *contactptr);
void getTenDigitPhone(char telNum[]);

// ----------------------------------------------------------------------------
// DO NOT remove the below line (closing of the "safeguard" condition)
#endif // !CONTACTS_H_