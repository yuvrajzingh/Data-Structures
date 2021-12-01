#include<iostream>
using namespace std;

int A[100],i,n; 


void inputArray(int n)
{
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
void reverseArray(int n)
{
    for(i=(n-1); i>=0; i--)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    cout<<"Enter the num of elements you want in the array: ";
    cin>>n;
    cout<<"\nenter elements: ";
    inputArray(n);
    cout<<"\nthe reversed array is: ";
    reverseArray(n);
    return 0;
}