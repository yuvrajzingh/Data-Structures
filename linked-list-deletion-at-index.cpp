#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void LL_traversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

class node *deletionAtIndex(node *head, int index)
{
    class node *p = head;
    class node *q = p->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    delete q;

    return head;
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    cout << "List before deletion: " << endl;
    LL_traversal(head);
   head = deletionAtIndex(head, 2);
    cout<<"List after deletion :"<<endl;
    LL_traversal(head);
    return 0;
}