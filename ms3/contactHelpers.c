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
#include <string.h>
#include "contacts.h"
#include "contactHelpers.h"
// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:



// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n')
		; // empty execution code block on purpose
}

// pause:
void pause(void) {
	printf("(Press Enter to continue)");
	clearKeyboard();
}

// getInt:
int getInt(void) {
	char NL = 'x';
	int value;
	while (NL != '\n') {
		scanf("%d%c", &value, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return value;
}

// getIntInRange:
int getIntInRange(int min, int max) {
	int InRange;
	int flag = 0;
	do {
		InRange = getInt();
		if (InRange < min || InRange > max)
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		else
			flag = 1;

	} while (flag == 0);
	return  InRange;
}

// yes:
int yes(void) {
	int value;
	char NL = 'x';
	char charvalue = 'x';

	while (NL != '\n') {
		scanf("%c%c", &charvalue, &NL);

		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
		else
			switch (charvalue) {
			case'Y':
			case'y':
				value = 1;
				break;
			case'N':
			case'n':
				value = 0;
				break;
			default:
				NL = 'x';
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
				break;
			}
	}
	return value;
}

// menu:
int menu(void) {
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:>");

	return getIntInRange(0, 6);

}

// ContactManagerSystem:
void ContactManagerSystem(void) {
	int intvalue;
	do {
		intvalue = menu();
		switch (intvalue) {
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			if (yes())
			{
				intvalue = 7;
				printf("\nContact Management System: terminated");
			}
			printf("\n");
			break;
		default:
			break;
		}
	} while (intvalue != 7);
}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10 chars entered)
void getTenDigitPhone(char telNum[11])
{
	int needInput = 1;
	//t strlen(int size);
	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
	return -1;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void) {

}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int size) {

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* contact) {

}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contact[], int size) {

}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contact[], int size) {

}


// addContact:
// Put empty function definition below:

void addContact(struct Contact contact[], int size) {

}

// updateContact:
// Put empty function definition below:

void updateContact(struct Contact contact[], int size) {

}

// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contact[], int size) {

}


// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact contact[], int size) {

}