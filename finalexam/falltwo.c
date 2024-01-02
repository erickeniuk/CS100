//adds items to a list, then prints all names AFTER the name that is entered

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct node {
 char *name;
 struct node *next;
} Node;

void printAfter(Node *, char *);

Node *add(Node *ptr, char *name) {
 Node *newOne = malloc( sizeof(Node) );
 newOne->name = malloc( strlen(name) + 1 );
 strcpy(newOne->name, name);
 newOne->next = ptr;
 return newOne;
}

int main(void) {
 char str[100];
 Node *myList = NULL;
 printf("Enter a name to add : ");
 scanf("%s", str);
 while (strcmp(str, "quit") != 0) {
 myList = add(myList, str);
 printf("Enter a name or \"quit\" : ");
 scanf("%s", str);
 }
 printf("\n\n\nEnter a name : ");
 scanf("%s", str);
 printf("The list after %s\n", str);
 printAfter(myList, str);
 return 0;
}

void printAfter(Node *myList, char *name) {
  Node *ptr1 = myList;
  int count = 0;
  while (ptr1) {
    if (strcmp(name, ptr1->name) == 0) {
    count = count + 1;
    while (ptr1->next!= NULL) {
    ptr1 = ptr1->next;
    printf("%s ", ptr1->name);}}

    else ptr1 = ptr1->next;

  }
  if (count == 0) printf("!!The name doesn't exist dummy!!\n");
  printf("\n");
  return;
}
