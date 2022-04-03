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

    int current = 0;

    for(int i=0; i<n; i++)
    {
        current = 0;
        int sum = 0;
        for(int j=i; j<n;j++)
        {
            current += arr[j];
            sum+= current;
            
        }
        cout<<"Sum of "<<i+1<<" subarray: "<<current<<" ";
        cout<<endl;
    }

    return 0;
}
