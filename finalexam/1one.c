#include <stdio.h>
#include <stdlib.h>


typedef struct node {
 int value;
 struct node *next;
} Node;

void aboveAverage(Node *);

int main( void ) {
 int num;
 Node *head = NULL;
 printf("Enter a number to add to the list : ");
 scanf("%d", &num);
 while ( num != -999 ) {
 Node *ptr = (Node *) malloc ( sizeof(Node) );
 ptr->value = num;
 ptr->next = head;
 head = ptr;
 printf("Enter another number or -999 to exit : ");
 scanf("%d", &num);
 }
 aboveAverage(head);
 return 0;
}

void aboveAverage(Node *head){
  Node *ptr = head;
  Node *ptr1 = head;
  int total = 0;\
  int count = 0;
  int average;

  while (ptr) {
    total = total + ptr->value;
    count = count + 1;
    ptr= ptr->next;
  }
  average = total / count;

  while (ptr1) {
    if (ptr1->value > average) printf("%d, ", ptr1->value);
    ptr1 = ptr1->next;
  }
  printf("is/are above the average of the list!\n");

  return;
}
