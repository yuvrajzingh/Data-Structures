#include<bits/stdc++.h>
using namespace std;



void bubbleSort(int n, int arr[])
{
    int counter = 1;

    while(counter < n)
    {
        for(int i=0; i<n-counter; i++)
        {
         if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = counter;
                counter = temp;
            }
        }
        counter++;
    }
}

bool pairsum(int n, int arr[], int k)
    {
        int low = 0;
        int high = n-1;

        while(low<high)
        {
            if(arr[low] + arr[high] == k)
            {
                cout<<low<<" index and "<<high<<" index "<<endl;
                return true;
            }
            else if(arr[low] + arr[high] >k)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return false;
    }


int main()
{
    int n;

    cout<<" Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0; i<n; i++)
    {
        cin>> arr[i];
    }

    int k;
    cout<<"Enter the sum: ";
    cin>>k;
    
    bubbleSort(n, arr);

    pairsum(n, arr, k);
    

    return 0 ;
}