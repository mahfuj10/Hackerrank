
SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{

    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *currNode = llist;

    while (position > 1)
    {
        position -= 1;
        currNode = currNode->next;
    };

    newNode->next = currNode->next;
    currNode->next = newNode;

    return llist;
}