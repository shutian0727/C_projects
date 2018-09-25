/* -------------------------------------------
Name:Shutian Xu
Student number:109783175
Email:sxu61@myseneca.ca
Section:SQQ
Date:Dec.17.2017
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#include "contacts.h"
#include "contactHelpers.h"

#define MAXCONTACTS 5 
// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:


// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:



// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
void clearKeyboard(void)
{
	while (getchar() != '\n')
		; // empty execution code block on purpose
}

// pause:
void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void) {
	char NL = 'x';
	int value = 0;
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
	int InRange = 0;
	int flag = 0;
	do {
		InRange = getInt();
		if (InRange < min || InRange > max)
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		else
			flag = 1;

	} while (flag == 0);
	return InRange;
}

// yes:
int yes(void) {
	int value = 0;
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
				return value;
				break;
			case'N':
			case'n':
				value = 0;
				return value;
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
	int n;
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
	printf("Select an option:> ");
	n = getIntInRange(0, 6);
	printf("\n");
	return n;

}
// ContactManagerSystem:
void ContactManagerSystem(void) {
	int intvalue;
	struct Contact contact[MAXCONTACTS] = { { { "Rick",{ '\0' }, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" } },
	{ { "Maggie", "R.", "Greene" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9051112222", "9052223333", "9053334444" } },
	{ { "Morgan", "A.", "Jones" },
	{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	{ "7051112222", "7052223333", "7053334444" } },
	{ { "Sasha",{ '\0' }, "Williams" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9052223333", "9052223333", "9054445555" } }, };

	do {
		intvalue = menu();
		switch (intvalue) {
		case 1:
			displayContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 2:
			addContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 3:
			updateContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 4:
			deleteContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 5:
			searchContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 6:
			//sortContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 0:
			printf("Exit the program? (Y)es/(N)o: ");
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
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[11])
{
	int needInput = 1;

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
	int i = 0; 
	int index; 
	int val = 0; 
	int flag = 0;

	for (i = 0; i < size; i++) {
		val = strcmp(contacts[i].numbers.cell, cellNum);
			if (val == 0) {
				index = i;
				flag = 1;
			}
	}
	if (flag == 1)
		return index;
	else
		return -1;
}

// displayContactHeader
void displayContactHeader(void) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");

}
// displayContactFooter
void displayContactFooter(int totcontacts) {

	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", totcontacts);

}
// displayContact:
void displayContact(const struct Contact* contact) {
	printf(" ");
	if (*contact->name.middleInitial == '\0') {
		printf("%s %s\n", contact->name.firstName, contact->name.lastName);
	}
	else
	{
		printf("%s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
	}

	printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	printf("       %d %s, ", contact->address.streetNumber, contact->address.street);


	if (contact->address.apartmentNumber > 0)
		printf("Apt# %d, ", contact->address.apartmentNumber);
	printf("%s, %s\n", contact->address.city, contact->address.postalCode);
}

// displayContacts:
void displayContacts(const struct Contact contact[], int size) {
	int i = 0;
	int valueContacts = 0;

	displayContactHeader();

	for (i = 0; i < size; i++) {
		if (strlen(contact[i].numbers.cell) > 0)
		{
			//flag = 1;
			displayContact(&contact[i]);
			valueContacts++;

		}
	}
	displayContactFooter(valueContacts);
}
// searchContacts:
void searchContacts(const struct Contact contact[], int size) {
	int i = 0;
	char cellno[11] = " ";
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellno);
	printf("\n");
	if (findContactIndex(contact, size, cellno) != -1)
	{
		
		i = (findContactIndex(contact, size, cellno));
		displayContact(&contact[i]);
		printf("\n");
	}
	else
		printf("*** Contact NOT FOUND ***\n");



}
// addContact:
void addContact(struct Contact contact[], int size) {
	int i;
	int position = 0; 
	int flag = 0;
	
	for (i = 0; i < size && flag == 0; i++)
	{
		if (strlen(contact[i].numbers.cell) == 0)
		{
			flag = 1;
			position = i;
		}
	}

	if (flag == 0)
	{
		printf("*** ERROR: The contact list is full! ***\n");
	}
	if (flag == 1)
	{
		getContact(&contact[position]);
		printf("--- New contact added! ---\n");
	}
}
// updateContact:
void updateContact(struct Contact contact[], int size) {
	int position;
	int flag = 0;
	char cellno[11] = " ";
	
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellno);
	
	if (findContactIndex(contact, size, cellno) != -1)
	{

		position = findContactIndex(contact, size, cellno);
		printf("\n");
		printf("Contact found:\n");
		displayContact(&contact[position]);
		printf("\n");
		flag = 1;


		if (flag == 1)
		{
			printf("Do you want to update the name? (y or n): ");
			if (yes() == 1)
				getName(&contact[position].name);

			printf("Do you want to update the address? (y or n): ");
			if (yes() == 1)
				getAddress(&contact[position].address);

			printf("Do you want to update the numbers? (y or n): ");
			if (yes() == 1)
				getNumbers(&contact[position].numbers);

			printf("--- Contact Updated! ---\n");
		}
	}
	else
		printf("*** Contact NOT FOUND ***\n");
}
// deleteContact:
void deleteContact(struct Contact contact[], int size) {
	
	int position;
	char cellno[11] = " ";
	
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellno);
	
	if (findContactIndex(contact, size, cellno) != -1)
	{

		position = findContactIndex(contact, size, cellno);
		printf("\n");
		printf("Contact found:\n");
		displayContact(&contact[position]);
		printf("\n");
		printf("CONFIRM: Delete this contact? (y or n): ");
		if (yes() == 1) {
			
			contact[position].numbers.cell[0] = '\0';

			printf("--- Contact deleted! ---\n");
		}

	}
	else
		printf("*** Contact NOT FOUND ***\n");
	}

	// sortContacts:
	/*	void sortContacts(struct Contact contact[], int size) {
	int i, j, m;
	int tmp;
	for (i = 0; i < 10; i++) {
	m = i;
	for (j = i + 1; j < 10; j++)
	if contact[j] < contact[m]) {
	m = j;
	}
	if (m != i) {
	tmp = contact[i];
	contact[i] = contact[m];
	contact[m] = tmp;
	}
	}
	printf("--- Contacts sorted! ---\n");*/


	//	menu(display);


