#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int value;
int count;
struct node *next;
} Node;

Node *addToList(Node *head, int num);
void stats(Node *head);

Node *addToList(Node *head, int num) {
          Node *newOne = malloc( sizeof(Node) );
          newOne->value = num;

          Node *ptr = head;

          while (ptr) {
            if(ptr->value == num) {
              ptr->count = ptr->count + 1;
              return head;
            }
            ptr = ptr->next;
          }
          // case #1 - adding to an empty list
          if (head == NULL) {
                  newOne->next = NULL;
                  newOne->count = 1;
                  return newOne;
          }

          // case #2 - adding at the front of the list ODD NUMBERS
          if ((num == 1) || (num == -1) || (num % 2) != 0) {
                  newOne->next = head;
                  newOne->count = 1;
                  return newOne;
          }

          // case #3 - adding somewhere in the middle/end
          Node *prev = head;
          Node *curr = head->next;

          newOne->count = 1;

          while (curr && ((num % 2) == 0)) {
                  prev = curr;
                  curr = curr->next;
          }
          prev->next = newOne;
          newOne->next = curr;
          return head;
        }



void stats(Node *head) {
  int even = 0;
  int odd = 0;
  int noom;
  int coont;

  while (head) {
    noom = head->value;
    coont = head->count;
    if ((noom % 2 == 0) && (noom != 1) && (noom != -1)) even = even + coont;
    if ((noom % 2 != 0) || (noom == 1) || (noom == -1)) odd = odd + coont;
    head=head->next; }

        printf("%d even and %d odd numbers", even, odd);
        printf("\n\n");
        return;
}

void printList(Node *ptr) {
 while (ptr < 4)
 { printf("[%d-%d] ", ptr->value, ptr->count); ptr=ptr->next; }
printf("\n");
}


int main( int argc, char *argv[] ) {
Node *head = NULL;
if ( argc != 2 )
 { printf("Usage: ./a.out datafile\n"); exit(1); }
FILE *fp = fopen(argv[1], "r");
if ( ! fp )
 { printf("File %s does not exist\n", argv[1]); exit(1); }
int num;
fscanf(fp, "%d", &num);

while ( ! feof(fp) ) {
head = addToList( head, num );
fscanf(fp, "%d", &num); }

printList(head);
stats(head);
return 0;
}
