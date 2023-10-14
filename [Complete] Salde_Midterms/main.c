#include <stdio.h>
#include <stdlib.h>
#include "cis1201.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("[1.0 ] Empoyee List (ID & Name): \n\n");
	// start of no.1
	// make the code below work by updating the populateEmployeeList() in cis1201.c
	EmployeePtr employees = populateEmployeeList();
	displayEmployees(employees);
	// end of no.1
	
	printf("\n\n\n");
	system("pause");
	system("cls");
	
	printf("[2.0 ] Convert 12-hour time format to 24-hour time format:\n");
	// start of no.2
	/* make your declaration and function calls here for no.2
	 * utilize the newly created function and usable functions in cis1201 files
	 */
	MyTime ti;
	ti.hour = 7;
	ti.minute = 61;
	ti.meridian = false;
	displayTime12(ti);
	convertTime(&ti);
	displayTime24(ti);

	//end of no.2
	
	printf("\n\n\n");
	system("pause");
	system("cls");
	
	printf("[3.0 ] Employee Information (DISPLAY):\n\n");
	// start of no.3
	/* using the employee list in no.1 display all there information
	 * utilizing the display employee info (single employee) function
	 * create necessary decleration here for no.3
	 */
	
	indivInfo(employees);
	// end of no.3
	
	printf("\n\n\n");
	system("pause");
	system("cls");
	
	printf("[4.0 ] Employees that are late on a specified day in the morning(DISPLAY NAMES):\n\n");
	// start of no.4
	// display all the late employees and make you necessary declaration here
	
	printf("\nIncurred Lates on Wednesday");
	grabLate(employees);
	

	//end of no.4
	
	printf("\n\n\n");
	system("pause");
	return 0;
}
