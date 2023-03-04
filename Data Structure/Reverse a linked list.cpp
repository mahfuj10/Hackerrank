SinglyLinkedListNode *reverse(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *current = llist;
    SinglyLinkedListNode *next = NULL;
    SinglyLinkedListNode *prev = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    };

    return prev;
}