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

class node *InsertionAfterNode(class node *head, class node *prevNode, int data)
{
    class node *ptr = new node();
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next= ptr;
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
    head = InsertionAfterNode(head, third, 34);
    cout<<"elements after insertion : "<<endl;
    linkedListTraversal(head);

    return 0;
}