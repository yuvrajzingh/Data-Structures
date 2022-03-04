#include<bits/stdc++.h>
using namespace std;


int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        currsum+=arr[i];
        if(currsum<0)
        {
            currsum = 0;
        }
        maxSum = max(maxSum, currsum);
    }
    
    return maxSum;
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

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n); 
    int totalSumOfArray = 0;
    for(int i=0; i<n; i++)
    {
        totalSumOfArray+= arr[i]; 
        arr[i] = -arr[i];
    }

    wrapSum = totalSumOfArray + kadane(arr, n);

    cout<<"Maxixmum sum of subarray is: "<<max(wrapSum, nonWrapSum);

    return 0;
}