/* -------------------------------------------

Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: March 2018

----------------------------------------------

Assignment: 2
Milestone:  1

---------------------------------------------- */


//------------------------------------------------------

// Structure Types

//------------------------------------------------------


// +-------------------------------------------------+

// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
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
    int cell[11];
    int home[11];
    int business[11];
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
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
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