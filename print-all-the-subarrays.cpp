#include<bits/stdc++.h>
using namespace std;

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
    int sum = n*(n+1)/2;
    cout<<"The number of subarrays is: "<<sum<<endl;

    cout<<"The subarrays are: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }

    return 0;
}