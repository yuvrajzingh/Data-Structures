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

class node *InsertionAtIndex(class node *head, int data, int index)
{
    class node *ptr = new node();
    class node *p = head;
    int i=0;

    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
    head = InsertionAtIndex(head, 70, 2);
    cout<<"elements after insertion : "<<endl;
    linkedListTraversal(head);

    return 0;
}