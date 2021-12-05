#include<iostream>
using namespace std;

int main()
{           

    int n , i, j, k, temp;
    
    cout<<"Enter the kth value: \n";
    cin>>k;

    cout<<"Enter value of n\n";
    cin>>n;
    

    int a[n];
    cout<<"enter the elements in array\n";

    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++)
    {
        for(j=i+(k-1); j<n ;j++ )
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"kth largest element = "<<a[(k-1)];
    cout<<"\nkth smallest element = "<<a[n-k];

    return 0 ;

}