#include<iostream>
using namespace std;

int n, i, arr[10], element;

void inputArray()
{
    cout<<"\ninput sorted array for binary search unsorted or sorted for linear search.";
    cout<<"\nEnter the size of the array : ";
    cin>>n;

    for(i=0; i<n ; i++)
    {
        cout<<"enter element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"enterred array : ";
    for(i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

int linearSearch()
{
    cout<<"\nenter the element you want to linearly search for: ";
    cin>>element;

    for(i=0; i<n ; i++)
    {
        if(arr[i]==element)
        {
            cout<<"The element is at index : "<<i;
        }
    }
    
    return -1;
    
}

int BinarySearch()
{
    cout<<"\nenter the element you want to linearly search for: ";
    cin>>element;

    int low=0, mid, high=n-1;

    while (low<=high)
    {
        mid =(low + high)/2;
        if(arr[mid]==element)
        {
            cout<<"The element is at position: "<<mid;
        }
        if(arr[mid]<element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        } 
    }
    return -1;
    
}

int main()
{
    inputArray();
    linearSearch();
    inputArray();
    BinarySearch(); 
    return 0;
}