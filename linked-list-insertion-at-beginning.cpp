#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

class Node *InsertionAtBeginning(class Node *head, int data)
{
    class Node * ptr =  new Node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

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
