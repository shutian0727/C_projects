/* -------------------------------------------
Student number:109783175
Email:sxu61@myseneca.on.ca
Section:SQQ
Date:11.30.2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

// Structure type Name declaration (Milestone 1)
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
	char cell[21];
	char home[21];
	char business[21];
};




// Structure type Contact declaration
struct Contacts {
	struct Name       name;
	struct Address    address;
	struct Numbers    numbers;
};


//------------------------------------------------------

// ====== Milestone 4 =======

// Get and store from standard input the values for Name
void getName(struct Name * fullname);

// Get and store from standard input the values for Address
void getAddress(struct Address * fulladdress);
 
// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers * fullnumbers);

