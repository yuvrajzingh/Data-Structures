#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    char *arr;
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

void push(stack *ptr, char val)
{
    if (isFull(ptr))
    {
        cout<<"Stack Overflow! Cannot push "<< val <<" to the stack\n";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout<<"Stack Underflow! Cannot pop from the stack\n";
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *exp)
{
    // Create and initialize the stack
    class stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char(sp->size);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    if (isEmpty(sp))
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
    char *exp = "((8)(*--$$9))";
    // Check if stack is empty
    if (parenthesisMatch(exp))
    {
        cout<<"The parenthesis is matching";
    }
    else
    {
        cout<<"The parenthesis is not matching";
    }
    return 0;
}