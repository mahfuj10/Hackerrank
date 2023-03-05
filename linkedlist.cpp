#include <iostream>
using namespace std;

struct node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    };
};

void insertFirst(node **head, int val)
{
    node *newNode = new node(val);
    newNode->next = *head;
    *head = newNode;
};

void insertTail(node *tail, int val)
{
    node *newNode = new node(val);
    tail->next = newNode;
    tail = newNode;
}

void deleteNode(node **head, int position)
{
    node *curr = *head;
    node *prev = *head;

    if (*head == NULL)
    {
        return;
    }

    if (position == 1)
    {
        *head = curr->next;
        free(curr);
        curr = NULL;
        return;
    }

    while (position != 1)
    {
        prev = curr;
        curr = curr->next;
        position--;
    }

    prev->next = curr->next;
    free(curr);
    curr = NULL;
};

void insertNodeByIndex(node *head, int val, int index)
{
    if (index == 0)
    {
        insertFirst(&head, val);
        return;
    };
    int size = 2;
    if (index == size)
    {
        insertTail(head, val);
        return;
    };
    node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    // node newNode = new node(val, temp->next);
    // temp->next = node;
};

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> " << endl;
        temp = temp->next;
    };
};
int main()
{
    node *head = NULL;
    insertFirst(&head, 1);
    insertTail(head, 10);
    insertFirst(&head, 12);
    deleteNode(&head, 1);
    display(head);
    return 0;
};