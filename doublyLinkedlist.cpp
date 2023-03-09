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
    }
};

void insertFirst(node **head, int val)
{
    node *newNode = new node(val);
    newNode->next = *head;
    *head = newNode;
};

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    insertFirst(&head, 21);
    display(head);
    return 0;
}