#pragma once
#define _CRT_SECURE_NO_WARNINGS

/* -------------------------------------------
Name:Shutian Xu
Student number:109783175
Email:sxu61@myseneca.ca
Section:SQQ
Date:11/29/2017
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

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
struct Phonenumbers {
	char cell[21];
	char home[21];
	char business[21];
};
