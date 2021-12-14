#include<iostream>
using namespace std;

int i, l, n, h;
int arr[100];

void inputArray()
{

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"\nenter the elements: \n";
    for(i=0; i<n ; i++)
    {
        cout<<"element "<<i+1<<" : ";
        cin>>arr[i];
    }
    
}

void sortNegatives()
{
    
    l=0;
    h=n-1;

    while(l<=h)
    {
        if (arr[l]<0 && arr[h]<0)
        {
            l++;
        }
        else if (arr[l]>0 && arr[h]<0)
        {
            swap(arr[h], arr[l]);
            l++;
            h--;
        }
        else if (arr[l]>0 && arr[h]>0)
        {
            h--;
        }
        else
        {
            l++;
            h--;
        }
        
    }
}

void display()
{   
    h=n-1;

    cout<<"sorted array is : ";
    for(i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    inputArray();

    sortNegatives();

    display();


    return 0;
}