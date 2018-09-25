/*
Name: Shutian Xu
Student number: 109783175
Workshop: W5 emp_inlab
Email: sxu61@myseneca.ca
Section: SQQ
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2

// To declare Struct Employee
struct Employee {
	int id_num; // ID number
	int age; // Age
	double salary; //Salary 
};

int main(void)
{
	int i;
	int option = 0;
	int num_emp = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");
	// Declare a struct Employee array "emp" with SIZE elements
	// and initialize all elements to zero
	struct Employee emp[SIZE] = { { 0 } };

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1:
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i < SIZE; i++) {
				if (emp[i].id_num > 0) {
					printf("%6d%9d%11.2lf\n", emp[i].id_num, emp[i].age, emp[i].salary);
				}
			}
			printf("\n");
			break;

		case 2:
			printf("Adding Employee\n");
			printf("===============\n");

			if (num_emp >= SIZE) {
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}
			else {
				printf("Enter Employee ID: ");
				scanf("%d", &emp[num_emp].id_num);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[num_emp].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[num_emp].salary);
				printf("\n");
				num_emp++;
			}
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}