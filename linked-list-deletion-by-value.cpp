#include<iostream>
using namespace std;

class node 
{
    public:
        int data;
        node *next;
};

void LL_traversal(node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;

    }
}

class node *DeletionByValue(node *head, int value)
{
    node *p = head;
    node *q = p->next;

    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data == value)
    {
        p->next = q->next;
        delete q;
    }

    return head;
}


int main ()
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

    cout<<"Before Deletion: \n";
    LL_traversal(head);

    head = DeletionByValue(head, 30);
    cout<<"Linked List after Deletion : \n";
    LL_traversal(head);
    return 0;
}