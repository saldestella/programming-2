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
//    system("cls");
    int i;
    printf("\n\t=================== MENU ===================\n");
	printf("\t\tSelect an option from 0 to 8: \n");
	printf("\t============================================\n");
    char options[9][20] = {
        "Exit Program", "Insert", "Insert Last", "Delete At", "Search At", 
        "Search For", "Display List", "Display First", "Display Last"};
    for(i = 0; i < 9; ++i) {
        printf("\n\t[%d] %20s", i, options[i]);
    }
    printf("\t============================================\n\n");
        
}

int main() {
    ArrayList list;
    int idx = 0, position, element;
    int choice = 1;
    initialize(&list);

    do{
       menu(); 
    } while (choice != 0);
    
    
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

