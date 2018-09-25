

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
#include <stdio.h>
#include "contacts.h"


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


void buffer(void) {
	char characters = '0';
	do {
		scanf("%c", &characters);
	} while (characters != '\n');
}


int main(void)
{
	// Declare variables here:
	struct Name fullname = { "", "","" };
	struct Address fulladdress = { 0,"",0,"","" };
	struct Phonenumbers fullnumbers = { "","","" };
	char middleInitialFlag;
	char apartmentNumberFlag;
	char cellFlag;
	char homeFlag;
	char businessFlag;

	// Display the title
	printf("Contact Management System\n-------------------------\n");


	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf("%s", fullname.firstName);
	buffer();

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c", &middleInitialFlag);
	buffer();

	if (middleInitialFlag == 'y' || middleInitialFlag == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%s", fullname.middleInitial);
		buffer();
	}

	printf("Please enter the contact's last name: ");
	scanf("%s", fullname.lastName);
	buffer();

	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &fulladdress.streetNumber);
	buffer();

	printf("Please enter the contact's street name: ");
	scanf("%s", fulladdress.street);
	buffer();

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c", &apartmentNumberFlag);
	buffer();

	if (apartmentNumberFlag == 'y' || apartmentNumberFlag == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &fulladdress.apartmentNumber);
		buffer();
	}

	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", fulladdress.postalCode);
	buffer();


	printf("Please enter the contact's city: ");
	scanf("%s", fulladdress.city);
	buffer();

	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c", &cellFlag);
	buffer();

	if (cellFlag == 'y' || cellFlag == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%22s", fullnumbers.cell);
		buffer();
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c", &homeFlag);
	buffer();

	if (homeFlag == 'y' || homeFlag == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%22s", fullnumbers.home);
		buffer();
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &businessFlag);
	buffer();

	if (businessFlag == 'y' || businessFlag == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%22s", fullnumbers.business);
		buffer();
	}


	// Display Contact Summary Details

	printf("\nContact Details\n---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", fullname.firstName);
	if (middleInitialFlag == 'y' || middleInitialFlag == 'Y')
		printf("Middle initial(s): %s\n", fullname.middleInitial);
	printf("Last name: %s\n\n", fullname.lastName);
	printf("Address Details\n");
	printf("Street number: %d\n", fulladdress.streetNumber);
	printf("Street name: %s\n", fulladdress.street);
	if (apartmentNumberFlag == 'y' || apartmentNumberFlag == 'Y')
		printf("Apartment: %d\n", fulladdress.apartmentNumber);
	printf("Postal code: %s\n", fulladdress.postalCode);
	printf("City: %s\n\n", fulladdress.city);
	if (cellFlag == 'y' || homeFlag == 'y' || businessFlag == 'y' || cellFlag == 'Y' || homeFlag == 'Y' || businessFlag == 'Y')
		printf("Phone Numbers:\n");
	if (cellFlag == 'y' || cellFlag == 'Y')
		printf("Cell phone number: %s\n", fullnumbers.cell);
	if (homeFlag == 'y' || homeFlag == 'Y')
		printf("Home phone number: %s\n", fullnumbers.home);
	if (businessFlag == 'y' || businessFlag == 'Y')
		printf("Business phone number: %s\n", fullnumbers.business);


	// Display Completion Message

	printf("\nStructure test for Name, Address, and Numbers Done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888
Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song
Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto
Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888
Structure test for Name, Address, and Numbers Done!
*/
