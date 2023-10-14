#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 10

/*	STRUCTURES	*/
typedef struct {
	int idNum;
	char fname[20];
	char lname[20];
	char mi;
	int yrlvl;
} Student;

typedef struct {
	Student students[size];
	int last;
} ArrayList;

/*  Functions   */
void initialize (ArrayList *L);
// void insert(ArrayList *L, int pos, Student s);
// void deleteAt(ArrayList *L, int pos);
// int searchAt(ArrayList L, int pos);		// returns e
// int searchFor(ArrayList L, int num);	// returns index
// void printList(ArrayList L);	
// Student first(ArrayList L);				// returns first element
// Student last(ArrayList L);				// returns last element

/*  MENU DISPLAY */
void menu() {
//    system(cls);
    
    printf("\n\t=================== MENU ===================\n");
	printf("\t\tSelect an option from 0 to 8: \n");
	printf("\t============================================\n");
	printf("\t [1] Display Scores\t[6] Retrieve First\n");
	printf("\t [2] Input Scores\t[7] Search\n");
	printf("\t [3] Average\t\t[8] Retrieve Last\n");
	printf("\t [4] Minimum\t\t[0]Exit Program\n");
	printf("\t [5] Retrieve\n");
    
	printf("\t============================================\n\n");
}

int main() {
    ArrayList list;
    int idx = 0, position, element;
    menu();
}

/*  Function Definitions   */
void initialize (ArrayList *L) {
    L->last = 0;
}

// void insert(ArrayList *L, int pos, Student s);

// void deleteAt(ArrayList *L, int pos);

// int searchAt(ArrayList L, int pos);		// returns e

// int searchFor(ArrayList L, int num);	// returns index

// void printList(ArrayList L);	

// Student first(ArrayList L);				// returns first element

// Student last(ArrayList L);				// returns last element

