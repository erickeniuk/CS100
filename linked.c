/*

You know that common operations for linked lists include:

traversals - print the list, count the elements, find an item, calculate a total/sum, etc
add to the list - the easy add methods are "add at front" and "add at rear" but an ordered add (alphabetical, numerical, etc.) makes the most sense
remove from the list - remove an item

You know that, to remove an item, you need to update the pointer of the item before it in the list (the previous item) so that it points to the next item after the one you are removing



You know that the code for remove looks similar to the code for add (you need to maintain two values)



You know the code below will remove an item from a linked list of names
*/

Node *dump(Node *head, char *name) {
        // case #1 - empty list
        if (head == NULL) {
                printf("Error : %s not found in list\n", name);
                return head;
        }
        // case #2 - removing first element in list
        if (strcmp(name, head->name) == 0) {
                Node *ptr = head->next;
                free(head->name);
                free(head);
                return ptr;
        }

        // case #3 - removing from somewhere in the middle/end
        Node *prev = head;
        Node *curr = head->next;
        while (curr && strcmp(curr->name, name) < 0) {
                prev = curr;
                curr = curr->next;
        }
        if (curr == NULL) {
                printf("Error : %s not found in list\n", name);
                return head;
        }
        prev->next = curr->next;
        free(curr->name);
        free(curr);
        return head;
}
