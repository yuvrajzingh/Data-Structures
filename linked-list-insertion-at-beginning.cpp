#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void linkedListTraversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

class node *InsertionAtBeginning(class node *head, int data)
{
    class node * ptr =  new node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
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

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 55;
    third->next = fourth;

    fourth->data = 60;
    fourth->next = NULL;

    linkedListTraversal(head);
    cout<<endl;
    head = InsertionAtBeginning(head, 80);
    cout<<"element inserted at the beginning: "<<endl;
    linkedListTraversal(head);

    return 0;
}