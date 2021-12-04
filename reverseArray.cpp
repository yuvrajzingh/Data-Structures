#include<iostream>
using namespace std;

int A[100],i,n; 


void inputArray()
{
    cout<<"Enter the num of elements you want in the array: ";
    cin>>n;

    cout<<"\nenter elements: ";
    for( i=0; i<n; i++)
    {
        cin>>A[i];    
    }

    cout<<"\nentered array: ";
    
    for( i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    
}
void reverseArray()
{
    cout<<"\nthe reversed array is: ";

    for(i=(n-1); i>=0; i--)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    inputArray();
    reverseArray();

    return 0;
}
