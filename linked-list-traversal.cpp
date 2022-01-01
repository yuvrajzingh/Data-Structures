#include<iostream>
using namespace std;


class node
{
   public:
    int data;
    node *next;
};

void linkedListTraversal( node *ptr )
{
    while(ptr!=NULL)
    {
        for(int i=0; i<5; i++)
        {
            cout<<"element "<<i+1<<" : "<<ptr->data<<endl;
            ptr = ptr->next;
        }
    }
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

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 55;
    third->next = fourth;

    fourth->data = 60;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}