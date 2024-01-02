/*
You know there are three ways to add to a linked list

add-at-front (easy)
add-at-rear (relatively easy)
add-in-order (not hard, but requires more thought than the other two)


You know that to add-in-order you have to understand how your nodes in the linked list should be ordered, which depends on the linked list contents.  A linked list of polynomials could be ordered from largest to smallest degree, a linked list of names could be ordered alphabetically, and so on.



To add a node in order, you must

allocate space for the new node and fill in its various data fields
insert this node into the linked list by one of the following actions
If the linked list is empty, the new node is now the complete linked list
If the new node should go before the first node in the list, do a "add-at-front"
Otherwise, find the two nodes that bracket the new node (the one before the new node and the one after the new node) and then update two pointers.
The node before the new node should now point to the new node
The new node should then point to the next node in the list


You know the code below does an "add-in-order" for a linked list of names
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
        char *name;
        struct node *next;
} Node;

Node *add(Node *, char *);
void print(Node *);

int main(void) {
        Node *head = NULL;
        char str[50];

        printf("Enter a name or 'quit' to exit : ");
        scanf("%s", str);
        while ( strcmp(str, "quit") != 0 ) {
                head = add(head, str);
                printf("\nThe list is now : ");
                print(head);
                printf("Enter a name or 'quit' to exit : ");
                scanf("%s", str);
        }
        return 0;
}

void print(Node *ptr) {
        while (ptr) {
                printf("%s ", ptr->name);
                ptr = ptr->next;
        }
        printf("\n\n");
        return;
}

Node *add(Node *head, char *n) {
        Node *newOne = malloc( sizeof(Node) );
        newOne->name = malloc( strlen(n) + 1 );
        strcpy(newOne->name, n);

        // case #1 - adding to an empty list
        if (head == NULL) {
                newOne->next = NULL;
                return newOne;
        }

        // case #2 - adding at the front of the list
        if (strcmp(n, head->name) < 0) {
                newOne->next = head;
                return newOne;
        }

        // case #3 - adding somewhere in the middle/end
        Node *prev = head;
        Node *curr = head->next;

        while (curr && strcmp(curr->name, n) < 0) {
                prev = curr;
                curr = curr->next;
        }

        prev->next = newOne;
        newOne->next = curr;
        
        return head;}
