#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void LL_Traversal(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    } 
}

class Node *DeletionAtBeginning(Node *head)
{
    class Node *ptr = head;
    head = head->next;
    delete ptr;

    return head;

}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    Node *fifth;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    cout<<"List before deletion: "<<endl;
    LL_Traversal(head);
   head = DeletionAtBeginning(head);

    cout<<"List after deletion: "<<endl;
    LL_Traversal(head);

    return 0;
}