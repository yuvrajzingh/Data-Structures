#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};

int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack Underflow";
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void push(stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Stack overflow";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int peek(class stack *s, int i)
{
    int arrayInd = s->top - i + 1;
    if (arrayInd < 0)
    {
        cout << "Not a valid position for the stack\n";
        return -1;
    }
    else
    {
        return s->arr[arrayInd];
    }
}

int main()
{
    class stack *s = new stack();
    s->size = 15;
    s->top = -1;
    s->arr = new int(s->size);

    cout << "Stack has been created successfully\n";

    push(s, 10);
    push(s, 5);
    push(s, 1);
    push(s, 40);

    cout<<"Peeking :"<<endl;
    
    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(s, j));
    }

    return 0;
}
