#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int s;
    cout<<"Enter the sum: ";
    cin>>s;

    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int i=0, j=0, st=-1, en=-1, sum=0;

    while(j<n && sum+a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if(sum==s)
    {
        cout<<"The subarray starts from position: "<<i+1<<"\nto position : "<<j<<endl;
        return 0;
    }

    while(j<n)
    {
        sum += a[j];
        while(sum > s)
        {
            sum -= a[i];
            i++;
        }
        if(sum == s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }

    cout<<"The subarray starts from position: "<<st <<"\nto position : "<<en <<endl;

    return 0;
}
