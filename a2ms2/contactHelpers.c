/* -------------------------------------------
Name:Shutian Xu
Student number:109783175
Email:sxu61@myseneca.ca
Section:SQQ
Date:12.09.17
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */


// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"



// Clear the standard input buffer
void clearKeyboard(void)
{
	while (getchar() != '\n')
		; // empty execution code block on purpose
}
// pause function definition goes here:
void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}
// getInt function definition goes here:
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

// getIntInRange function definition goes here:
int getIntInRange(int min, int max) {
	int InRange ;
	int flag =0;
	do {
		InRange = getInt();
		if (InRange < min || InRange > max)
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		else
	            flag =1;
 
	} while (flag == 0);
 return InRange;    
}

// yes function definition goes here:
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

// menu function definition goes here:
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

// ContactManagerSystem function definition goes here:
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
