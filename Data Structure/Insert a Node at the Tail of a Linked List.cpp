SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);

    if (head == NULL)
    {
        return head = node;
    };

    SinglyLinkedListNode *rhead = head;

    while (head->next != NULL)
    {
        head = head->next;
    };

    head->next = node;
    return rhead;
}