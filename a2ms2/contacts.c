/* -------------------------------------------
Name: Shutian Xu
Student number:109783175
Email:sxu61@myseneca.on.ca
Section:SQQ
Date:12.9.17
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:



// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:



// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"


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
printf("Please enter the contact's street number: ");
fulladdress->streetNumber = getInt();


printf("Please enter the contact's street name: ");
scanf("%41[^\n]", fulladdress->street);
clearKeyboard();

printf("Do you want to enter an apartment number? (y or n): ");
if (yes()) {
	printf("Please enter the contact's appartment number: ");
	fulladdress->apartmentNumber = getInt();
	clearKeyboard();
}

printf("Please enter the contact's postal code: ");
scanf("%8[^\n]", fulladdress->postalCode);
clearKeyboard();


printf("Please enter the contact's city: ");
scanf("%41[^\n]", fulladdress->city);
int getInt();
clearKeyboard();

}


// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers * fullnumbers)

{
	int re;

	printf("Please enter the contact's cell phone number: ");
	scanf("%11[^\n]", fullnumbers->cell);
	clearKeyboard();

	printf("Do you want to enter a home phone number? (y or n): ");
	re = yes();

	if (re == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf("%11[^\n]", fullnumbers->home);
		clearKeyboard();
	}
	
	printf("Do you want to enter a business phone number? (y or n): ");
	re = yes();
	if (re == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf("%11[^\n]", fullnumbers->business);
		clearKeyboard();
	}
}




// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact * contact)
{
	
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
	

	// Use an open and close curly brace with a blank line 
}
