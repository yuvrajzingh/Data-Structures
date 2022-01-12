#include<iostream>
using namespace std;

class node 
{
    public: 
        int data;
        node *next;
};

void CLL_traversal(node *head)
{
    node *ptr = head;
    do
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
    while(ptr!=head);
}

class node *insertionAtStart(node *head, int data)
{
    node *ptr = new node();
    ptr->data = data;

    node *p = head->next;
    while(p->next!=head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

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
    fourth->next = head;


    cout<<"Before insertion: \n";
    CLL_traversal(head);

    head = insertionAtStart(head, 5);

    cout<<"After insertion:  \n";
    CLL_traversal(head);

    return 0;
}