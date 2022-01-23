#include<iostream>
using namespace std;

int stack[100], n=100, top=-1;

void push(int val)
{
    if(top>=n-1)
    cout<<"Stack Overflow"<<endl;

    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if(top<=-1)
    {
        cout<<"Stack Underflow.";
    }
    else
    {
        cout<<"The popped element is "<< stack[top]<<endl;
        top--;
    }
}
int peek(int i)
{
    int arrInd = top - i;
    if(arrInd < 0)
    {
        cout<<"Not a valid position for the stack\n";
        return -1;
    }
    else
    {
        return stack[arrInd];
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are: ";
        for(int i=top; i>=0; i--)
        cout<<stack[i]<<" ";
        cout<<endl;
    }
    else
    {
        cout<<"Stack is empty";
    }
}


int main()
{
    int ch, val, i;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop in stack"<<endl;
    cout<<"3) Peek at any position in stack"<<endl;
    cout<<"4) Display stack"<<endl;
    cout<<"5) Exit"<<endl;

    do
    {
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: 
            {
                cout<<"Enter value to be pushed: "<<endl;
                cin>>val;
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
                cin >> i;
                cout<<"Peak function called - Value at postion "<<i<<" is "<<peek(i)<<endl;
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5: 
            {
                cout<<"Exit"<<endl;
                break;
            }
            default : 
            {
                cout<<"Invalid Choice"<<endl;
            }
        }
    
    }
    while(ch!=5);

    return 0;
}
