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

    int currsum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        currsum+=arr[i];
        if(currsum <0)
        {
            currsum = 0;
        }
        maxSum = max(maxSum, currsum);
    }

    cout<<"The maximum sum of subarrays is: "<<maxSum;

    return 0;
}


