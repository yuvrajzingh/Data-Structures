#include<iostream>
using namespace std;

//to check if a stack is empty or not

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
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    class stack *s = new stack();
    s->size = 80;
    s->top = -1;
    s->arr = new int(s->size);

    if(isEmpty(s))
    {
        cout<<"The stack is Empty";
    }
    else
    {
        cout<<"The stack is not Empty";
    }


    return 0;
}