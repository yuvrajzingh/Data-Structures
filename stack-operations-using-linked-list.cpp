#include <iostream>
using namespace std;


class Node
{
public:
   int data;
   Node *next;
};


class Node *top = NULL;
void push(int val)
{
   class Node *newnode = new Node();
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop()
{
   if (top == NULL)
      cout << "Stack Underflow" << endl;
   else
   {  
      cout << "The popped element is " << top->data << endl;
      top = top->next;
   }
}

int peek(int pos)
{
   
   class Node * ptr = top;
   for(int i = 0;i < pos-1 && ptr!=NULL; i++)
   {
      ptr = ptr->next;
   }
   if(ptr!=NULL)
   {
      return ptr->data;
   }
   else
   {
      return -1;
   }
}

void display()
{
   class Node *ptr;
   if (top == NULL)
      cout << "stack is empty";
   else
   {
      ptr = top;
      cout << "Stack elements are: ";
      while (ptr != NULL)
      {
         cout << ptr->data << " ";
         ptr = ptr->next;
      }
   }
   cout << endl;
}
int main()
{
   int ch, val, pos;
   cout << "1) Push in stack" << endl;
   cout << "2) Pop from stack" << endl;
   cout << "3) Peek at any position in stack" << endl;
   cout << "4) Display stack" << endl;
   cout << "5) Exit" << endl;
   do
   {
      cout << "Enter choice: " << endl;
      cin >> ch;
      switch (ch)
      {
      case 1:
      {
         cout << "Enter value to be pushed:" << endl;
         cin >> val;
         push(val);
         break;
      }
      case 2:
      {
         pop();
         break;
      }
      case 3:
      {
         cout<<"Enter the index at which you want to peek:"<<endl;
         cin >> pos;
         cout<<"Peak function called - Value at postion "<<pos<<" is "<<peek(pos)<<endl;
         break;
      }
      case 4:
      {
         display();
         break;
      }
      case 5:
      {
         cout << "Exit" << endl;
         break;
      }
      default:
      {
         cout << "Invalid Choice" << endl;
      }
      }
   } while (ch != 5);
   return 0;
}
