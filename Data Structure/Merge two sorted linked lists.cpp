// Sollution: 1 with recursive
SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    if (head1 == NULL)
    {
        return head2;
    };
    if (head2 == NULL)
    {
        return head1;
    };
    SinglyLinkedListNode *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeLists(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeLists(head1, head2->next);
    };
    return result;
}

// Sollution: 2
SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *p1 = head1;
    SinglyLinkedListNode *p2 = head2;
    SinglyLinkedListNode *dummyNode = new SinglyLinkedListNode(-1);
    SinglyLinkedListNode *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}