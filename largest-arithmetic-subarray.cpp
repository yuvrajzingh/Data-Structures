#include<bits/stdc++.h>
using namespace std;

int main()
{       

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int pd = a[1]-a[0];
    int curr = 2;
    int ans = 2;
    int j = 2;

    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout<< "Largest arithmetic subarray is : "<<ans<<endl;
    return 0;
}