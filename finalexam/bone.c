#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
 char *name;
 struct node *next;
} Node;

void printLongest(Node *);

int main( void ) {
 char input[1024];
 Node *head = NULL;
 printf("Enter a name to add to the list : ");
 scanf("%s", input);
 while ( strcmp(input, "quit") != 0 ) {
 Node *ptr = (Node *) malloc ( sizeof(Node) );
 ptr->name = (char *) malloc ( strlen(input) + 1 );
 strcpy(ptr->name, input);
 ptr->next = head;
 head = ptr;
 printf("Enter another name or \"quit\" to exit : ");
 scanf("%s", input);
 }
 printLongest(head);
 return 0;
}

void printLongest(Node *head) {
int length = 0;
int stored;
int final;

Node *ptr = head;
Node *ptr1 = head;

while (ptr) {
  stored = strlen(ptr->name);
  if (stored > length) length = stored;
  ptr=ptr->next;
  }

printf("\nThe max string length is %d\n and these names are the longest: \n", length);

while (ptr1) {
  final = strlen(ptr1->name);
  if (final == length)
  printf("%s\n", ptr1->name);
  ptr1=ptr1->next;
  }
  printf("\n");
}
