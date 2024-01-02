/*
PROJECT BY ERIC KENIUK
APRIL 20th, 2018
DOES A LOT OF THINGS
CREATES A DATABASE OF NAMES AND PHONE NUMBERS
CAN MESS WITH DATABASE
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include "phone.h"

///////////////////////////////////////////////////////////////

void printNumber(long val) {
	return;
}

///////////////////////////////////////////////////////////////

MultiLinkedList *removeItemFirstName(MultiLinkedList *list, char *first, char *last);
MultiLinkedList *removeItemLastName(MultiLinkedList *list, char *first, char *last);

MultiLinkedList *add(MultiLinkedList *list, char *first, char *last, long num) {
	Node *newOne = malloc( sizeof(Node) );
	newOne->first = malloc ( strlen(first) + 1 );
	strcpy(newOne->first, first);
	newOne->last = malloc ( strlen(last) + 1 );
	strcpy(newOne->last, last);
	newOne->number = num;

	// case #1 - adding to an empty list

	if (list->headFirstName == NULL) {
					newOne->nextFirst = NULL;
					list->headFirstName = newOne;
	}

	if (list->headLastName == NULL) {
						newOne->nextLast = NULL;
						list->headLastName = newOne;
						return list;
		}
	//ADDING TO THE FRONT OF LIST        //////////////////

	Node *prev = list->headFirstName;
	Node *curr = prev->nextFirst;

	Node *previous = list->headLastName;
	Node *current = previous->nextLast;

	//Checking for head = to new name. Print error message then.
	Node *checkName = list->headFirstName;

	while (checkName) {
	if ((strcasecmp(first, checkName->first) == 0) && (strcasecmp(last, checkName->last) == 0)) {
					printf("\nError: Name already exists ya dingus\n");
					return list;}
					checkName = checkName->nextFirst;
	}
	////// adding to the front alphabetically

	if (strcasecmp(first, prev->first) < 0) { // adding to the front alphabetically
					list->headFirstName = newOne;
					newOne->nextFirst = prev;
	}

	if (strcasecmp(last, previous->last) < 0) { // adding to the front alphabetically
				list->headLastName = newOne;
				newOne->nextLast = previous;
				//return list;
	}

	// ADDING TO THE LAST/MIDDLE OF THE LIST/////

	Node *prev1 = list->headFirstName;
	Node *curr1 = prev1->nextFirst;

	Node *previous1 = list->headLastName;
	Node *current1 = previous1->nextLast;

///first name list
while (curr1 && strcasecmp(curr1->first, first) < 0) {
	prev1 = curr1;
	curr1 = curr1->nextFirst; }

/*if (strcasecmp(prev1->first, first) == 0) {
if (strcasecmp(last, curr1->last) < 0) {
			prev1->nextFirst = newOne;
			newOne->nextFirst = curr1;
		}
	}
else {*/
//	prev1->nextFirst = curr1;
	//curr1->nextFirst = newOne;}
	prev1->nextFirst = newOne;
	newOne->nextFirst = curr1;


///last name list

while (current1 && strcasecmp(current1->last, last) < 0) {
	previous1 = current1;
	current1 = current1->nextLast; }
/*
if (strcasecmp(current1->last, last) == 0) {
if (strcasecmp(first, current1->first) < 0) {
			previous1->nextLast = newOne;
			newOne->nextLast = current1;
			return list;
		}
	}
else {
	previous1->nextLast = current1;
	current1->nextLast = newOne; }
	return list;
}*/
previous1->nextLast = newOne;
newOne->nextLast = current1;
return list;}

int size(MultiLinkedList *list) {
	// return the number of names in the list
	int count = 0;
	Node *ptr = list->headFirstName;

	while (ptr) {
		count = count + 1;
		ptr = ptr->nextFirst;
	}

	return count;
}

void printByFirst(MultiLinkedList *list) {
	Node *ptr = list->headFirstName;

	while (ptr) {
		printf("%s %s ", ptr->first, ptr->last);
		printf("%03ld-%03ld-%04ld\n", (0 + (ptr->number/10000000)), ((0 + (ptr->number/10000)%1000)), (0 + (ptr->number%10000))); /// 224 639 3648
		ptr = ptr->nextFirst;
	}
	return;
}

void printByLast(MultiLinkedList *list) {
	// print (traverse the byLast list)
	Node *ptr = list->headLastName;

	while (ptr) {
		printf("%s %s ", ptr->first, ptr->last);
		printf("%03ld-%03ld-%04ld\n", (0 + (ptr->number/10000000)), ((0 + (ptr->number/10000)%1000)), (0 + (ptr->number%10000))); /// 224 639 3648
		ptr = ptr->nextLast;
	}
	return;
}

int lookup(MultiLinkedList *list, char *name) {
	// print all instances of name (as either a first name or a last name)
	int count = 0;
	Node *ptr = list->headFirstName;
	Node *ptr2 = list->headLastName;

	while (ptr) {
		if (strcasecmp(name, ptr->first) == 0) {
		printf("%s %s ", ptr->first, ptr->last);
		printf("%03ld-%03ld-%04ld\n", (0 + (ptr->number/10000000)), ((0 + (ptr->number/10000)%1000)), (0 + (ptr->number%10000))); /// 224 639 3648
		count = count + 1;}
		ptr = ptr->nextFirst;
	}

	while (ptr2) {
		if (strcasecmp(ptr2->last, name) == 0) {
		printf("%s %s ", ptr2->first, ptr2->last);
		printf("%03ld-%03ld-%04ld\n", (0 + (ptr2->number/10000000)), ((0 + (ptr2->number/10000)%1000)), (0 + (ptr2->number%10000))); /// 224 639 3648
		count = count + 1;}
		ptr2 = ptr2->nextLast;

}
	return count;
}

void updatePhone(MultiLinkedList *list, char *first, char *last, long number) {
	// update the phone number for the individual specified

	//Checking for head = to new name. Print error message then.
	Node *checkName = list->headFirstName;
	int count = 0;

	while (checkName) {
					if ((strcasecmp(first, checkName->first) == 0) && (strcasecmp(last, checkName->last) == 0)) {
					count = count + 1;}
					checkName = checkName->nextFirst;
	}

	if (count == 0 ) {printf("\nError: Name does NOT exist\n");
	return;}
////CHECKS FOR NON EXISTANT NAME

	Node *ptr = list->headFirstName;
	while (ptr) {
		if ((strcasecmp(first, ptr->first) == 0) && (strcasecmp(last, ptr->last) == 0))
		ptr->number = number;
		ptr = ptr->nextFirst;
	}

	return;
}

MultiLinkedList *removeItem(MultiLinkedList *list, char *first, char *last) {
	// remove the individual specified from the list
	//Checking for head = to new name. Print error message then.
	Node *checkName = list->headFirstName;
	int count = 0;

	while (checkName) {
					if ((strcasecmp(first, checkName->first) == 0) && (strcasecmp(last, checkName->last) == 0)) {
					count = count + 1;}
					checkName = checkName->nextFirst;
	}

	if (count == 0 ) {printf("\nError: Name does NOT exist\n");
	return list;}
////CHECKS FOR NON EXISTANT NAME

list = removeItemFirstName(list, first, last);
list = removeItemLastName(list, first, last);

return list;
}

MultiLinkedList *updateFirst(MultiLinkedList *list, char *first, char *last, char *newFirst) {
	// update the first name of the individual specified
	//Checking for head = to new name. Print error message then.
	Node *checkName = list->headFirstName;
	int count = 0;

	while (checkName) {
					if ((strcasecmp(first, checkName->first) == 0) && (strcasecmp(last, checkName->last) == 0)) {
					count = count + 1;}
					checkName = checkName->nextFirst;
	}

	if (count == 0 ) {printf("\nError: Name does NOT exist\n");
	return list;}
////CHECKS FOR NON EXISTANT NAME

	Node *ptr = list->headFirstName;
	long number;
	while (ptr) {
		if ((strcasecmp(first, ptr->first) == 0) && (strcasecmp(last, ptr->last) == 0)){
		number = ptr->number;}
		ptr=ptr->nextFirst;
	}
	list = removeItem(list, first, last);
	list = add(list, newFirst, last, number);
	updatePhone(list, newFirst, last, number);

return list;
}
MultiLinkedList *updateLast(MultiLinkedList *list, char *first, char *last, char *newLast) {
	// update the last name of the individual specified
	//Checking for head = to new name. Print error message then.
	Node *checkName = list->headFirstName;
	int count = 0;

	while (checkName) {
					if ((strcasecmp(first, checkName->first) == 0) && (strcasecmp(last, checkName->last) == 0)) {
					count = count + 1;}
					checkName = checkName->nextFirst;
	}

	if (count == 0 ) {printf("\nError: Name does NOT exist\n");
	return list;}
////CHECKS FOR NON EXISTANT NAME

	Node *ptr = list->headLastName;
	long number;
	while (ptr) {
		if ((strcasecmp(first, ptr->first) == 0) && (strcasecmp(last, ptr->last) == 0)){
		number = ptr->number;}
		ptr=ptr->nextLast;
	}
	list = removeItem(list, first, last);
	list = add(list, first, newLast, number);
	updatePhone(list, first, newLast, number);

return list;
}

MultiLinkedList *removeItemFirstName(MultiLinkedList *list, char *first, char *last) {
	//helper to remove name from first name list

	// case #1 - empty list
	if (list->headFirstName == NULL) {
					printf("Error : %s %s not found in list\n", first, last);
					return list;
	}


	Node *ptr = list->headFirstName;
	// case #2 - removing first element in list
	if ((strcasecmp(first, (list->headFirstName)->first) == 0) && (strcasecmp(last, (list->headFirstName)->last) == 0)) {
					list->headFirstName = ptr->nextFirst;
					return list;
	}

	// case #3 - removing from somewhere in the middle/end
	Node *prev = list->headFirstName;
	Node *curr = prev->nextFirst;
	while (curr && strcasecmp(curr->first, first) < 0) {
					prev = curr;
					curr = curr->nextFirst;
	}
	if (curr == NULL) {
					printf("Error : %s %s not found in list\n", first, last);
					return list;
	}
	prev->nextFirst = curr->nextFirst;

	return list;
}
MultiLinkedList *removeItemLastName(MultiLinkedList *list, char *first, char *last) {
	//helper to remove name from last name list

	// case #1 - empty list
	if (list->headLastName == NULL) {
					printf("Error : %s %s not found in list\n", first, last);
					return list;
	}

	Node *ptr = list->headLastName;
	Node *prev = list->headLastName;
	Node *curr = prev->nextLast;
	// case #2 - removing first element in list
	if ((strcasecmp(first, ptr->first) == 0) && (strcasecmp(last, ptr->last) == 0)) {
					list->headLastName = ptr->nextLast;
					return list;
	}

	// case #3 - removing from somewhere in the middle/end
	while (curr && strcasecmp(curr->last, last) < 0) {
					prev = curr;
					curr = curr->nextLast;
	}
	if (curr == NULL) {
					printf("Error : %s %s not found in list\n", first, last);
					return list;
	}
	prev->nextLast = curr->nextLast;
	return list;
}
