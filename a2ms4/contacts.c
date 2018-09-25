/* -------------------------------------------
Name:Shutian Xu
Student number:109783175
Email:sxu61@myseneca.ca
Section:SQQ
Date:12.13.17
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+




// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:
void getName(struct Name * fullname)
{

	printf("Please enter the contact's first name: ");
	scanf("%31[^\n]", fullname->firstName);
	clearKeyboard();

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	if (yes())
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%7[^\n]", fullname->middleInitial);
		clearKeyboard();
	}

	printf("Please enter the contact's last name: ");
	scanf("%36[^\n]", fullname->lastName);
	clearKeyboard();
}


// getAddress:
void getAddress(struct Address * fulladdress)
{
	do {
		printf("Please enter the contact's street number: ");
		fulladdress->streetNumber = getInt();
	} while (fulladdress->streetNumber == 0);

	printf("Please enter the contact's street name: ");
	scanf(" %41[^\n]", fulladdress->street);

	clearKeyboard();
	
		printf("Do you want to enter an apartment number? (y or n): ");
		if (yes() == 1) {
			do
			{
				printf("Please enter the contact's apartment number: ");
				fulladdress->apartmentNumber = getInt();
			}

			while (fulladdress->apartmentNumber == 0);
		}

		else
			fulladdress->apartmentNumber = '\0';


	printf("Please enter the contact's postal code: ");
	scanf("%8[^\n]", fulladdress->postalCode);
	clearKeyboard();


	printf("Please enter the contact's city: ");
	scanf("%41[^\n]", fulladdress->city);
	clearKeyboard();

}



// getNumbers:
// HINT:   this function to use the new helper 
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers *fullnumbers)

{


	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(fullnumbers->cell);
	

	printf("Do you want to enter a home phone number? (y or n): ");

	if (yes() == 1) {
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(fullnumbers->home);

	}
	else
		*fullnumbers->home = '\0';

		printf("Do you want to enter a business phone number? (y or n): ");
	if (yes() == 1) {
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(fullnumbers->business);
		
	}
	else
		*fullnumbers->business = '\0';
}


// getContact
void getContact(struct Contact * contact)
{

	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);


	// Use an open and close curly brace with a blank line 
}






