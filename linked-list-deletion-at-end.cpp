#include<iostream>
using namespace std;

class node 
{
    public:
        int data;
        node *next;
};

void LL_traversal(node * ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Elements : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

class node *deletionAtEnd(node *head)
{
    node *p = head;
    node *q = p->next;

    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next= NULL;
    delete q;

    return head;
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;

    head = new node ();
    second = new node ();
    third = new node ();
    fourth = new node ();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    cout<<"Elements before deletion : "<<endl;
    LL_traversal(head);

    head = deletionAtEnd(head);
    cout<<"Elements after deletion : "<<endl;
    LL_traversal(head);
    return 0;
}