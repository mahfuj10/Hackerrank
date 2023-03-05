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

node *merge(node *head1, node *head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;

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
        p2->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummyNode->next;
};

node *mergeLinkedListRecursive(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    };

    if (head2 == NULL)
    {
        return head1;
    };

    node *result;

    if (head1->data < head2->data)
    {
        result = head1;
        result = mergeLinkedListRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result = mergeLinkedListRecursive(head1, head2->next);
    }

    return result;
}

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