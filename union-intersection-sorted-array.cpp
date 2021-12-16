#include<iostream>
using namespace std;

int i, n, m, l, h, arr1[100], arr2[100] ;

void inputArrays()
{
    cout<<"enter the size of the first array : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>arr1[i]; 
    }
    cout<<"enter the size of the second array : ";
    cin>>m;
    for(i=0; i<m; i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>arr2[i]; 
    }
}

void unionArray()
{
     l=0;
     h=0;
    
    cout<<"\nunion of the two array is: ";
    while (l<n && h<m)
    {
         if(arr1[l] < arr2[h])
        {
            cout<<arr1[l]<<" ";
            l++;
        }
        else if(arr2[h] < arr1[l])
        {
            cout<<arr2[h]<<" ";
            h++;
        }
        else 
        {
            cout<<arr2[h]<<" ";
            l++;
            h++;
        }
    }

    while (l<n)
    {
        cout<<arr1[l]<<" ";
        l++;
    }
    while (h<m)
    {
        cout<<arr2[h]<<" ";
        h++;
    }  
    
    
    
    
}

void intersectionArray()
{
     l=0;
     h=0;

    cout<<"\nintersection of the two array is : ";

    while (l<n && h<m)
    {
       if(arr1[l] < arr2[h])
        {
            l++;
        }
        else if(arr1[l] > arr2[h])
        {
            h++;
        }
        else if(arr1[l] == arr2[h])
        {
            cout<<arr1[l]<<" ";
            l++;
            h++;
        }
    }
    
    

}

int main()
{
    inputArrays();

    unionArray();

    intersectionArray();

    return 0;
}