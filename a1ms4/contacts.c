/* -------------------------------------------
Student number:109783175
Email:sxu61@myseneca.on.ca
Section:SQQ
Date:11.30.2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include"contacts.h"

struct Name fullname = { "", "","" };
struct Address fulladdress = { 0,"",0,"","" };
struct Numbers fullnumbers = { "","","" };
struct Contacts contact = { { { 0 } } };
char apartmentNumberFlag;
char cellFlag;
char homeFlag;
char businessFlag;

void buffer(void) {
	char characters = '0';
	do {
		scanf("%c", &characters);

	} while (characters != '\n');
}

void getName(struct Name * fullname) {
	
	char middleInitialFlag = '0';
	printf("Please enter the contact's first name: ");
	scanf("%[^\n]", fullname->firstName);
	buffer();

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c", &middleInitialFlag);
	buffer();

	if (middleInitialFlag == 'y' || middleInitialFlag == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%[^\n]", fullname->middleInitial);
		buffer();
	}

	printf("Please enter the contact's last name: ");
	scanf("%[^\n]", fullname->lastName);
	buffer();
}

void getAddress(struct Address * fulladdress) {
	printf("Please enter the contact's street number: ");
	scanf("%d", &fulladdress->streetNumber);
	buffer();

	printf("Please enter the contact's street name: ");
	scanf("%s", fulladdress->street);
	buffer();

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c", &apartmentNumberFlag);
	buffer();

	if (apartmentNumberFlag == 'y' || apartmentNumberFlag == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &fulladdress->apartmentNumber);
		buffer();
	}

	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", fulladdress->postalCode);
	buffer();


	printf("Please enter the contact's city: ");
	scanf("%[^\n]", fulladdress->city);
	buffer();

}

void getNumbers(struct Numbers * fullnumbers) {
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c", &cellFlag);
	buffer();

	if (cellFlag == 'y' || cellFlag == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%22s", fullnumbers->cell);
		buffer();
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c", &homeFlag);
	buffer();

	if (homeFlag == 'y' || homeFlag == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%22s", fullnumbers->home);
		buffer();
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &businessFlag);
	buffer();

	if (businessFlag == 'y' || businessFlag == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%22s", fullnumbers->business);
		buffer();
	}


}
