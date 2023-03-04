#include <bits/stdc++.h>

using namespace std;

SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    temp->next = llist;
    return temp;
}
