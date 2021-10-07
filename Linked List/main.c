#include "header.h"

int main()
{
    //Creating a linked list;
    struct Node *head = createList(50);

    //inserting a value end of the linked list
    append(&head, 60);

    //inserting a value head of the linked list
    insertFront(&head, 30);

    //printing list
    print(head);

    //reversing linked list
    reverse(&head);
    print(head);

    //searching a specific value at list
    search(head, 50);

    //sorting a linked list by using selection sort
    sort(head);
    print(head);

    //deleting all elements of linked list from memory
    destroy(&head);
    print(head);

    return 0;
}
