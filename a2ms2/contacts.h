/* -------------------------------------------
Name: Shutian Xu
Student number: 109783175
Email: sxu61@myseneca.ca
Section: SQQ
Date:12.09.17
----------------------------------------------
Assignment: 2
Milestone:  2
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
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};


// Structure type Numbers declaration
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};


// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};



//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function prototypes here...              |
// +-------------------------------------------------+


// Get and store from standard input the values for Name
void getName(struct Name* fullname);


// Get and store from standard input the values for Address
void getAddress(struct Address* fulladdress);


// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers* fullnumbers);


// Get and store from standard input the values for a Contact
void getContact(struct Contact* contact);


