struct Node *createList(int data)
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    if (head == NULL)
    {
        printf("List Creation Failed!\n");
        return head;
    }
    head->data = data;
    head->next = NULL;
    return head;
}