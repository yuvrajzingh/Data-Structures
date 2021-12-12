#include<iostream>
using namespace std;


int n, i ;
int arr[100];

void sorting()
{ 
    int l=0, m=0, h=n-1 ;

    cout<<"enter the array\n\n";

    for(i=0; i<n; i++)
    {
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    while(m<=h)
    {
        switch(arr[m])
        {
            case 0: swap(arr[l++], arr[m++]);
                    break;
            case 1: m++;
                    break;
            case 2: swap(arr[m], arr[h--]);
                    break;

                               
        }
    }
}

void printArray()
{
    

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";        
    }
}

int main()
{
    cout<<"enter the size of the array : ";
    cin>>n;

    sorting();
    cout<<"array after sorting : ";
    printArray();

    return 0;
}
