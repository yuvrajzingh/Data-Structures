#include<iostream>
using namespace std;



int arr[100], size , i;
int maxi;
int mini;

void inputArray()
{
    cout<<"Enter the size of the array : ";
    cin>>size;
 
    cout<<"Enter the elements : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}

void MaxMin()
{

   int maxi = mini = arr[0] ;
    
    for(i=1; i<size; i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
        else if(arr[i]<mini)
        {
            mini = arr[i];
        }
        
    }  
    cout<<"The maximum element is: "<<maxi;
    cout<<"\nThe minimum element is: "<<mini;
  
    
}
int main()
{     
 
    inputArray();
    MaxMin();


    return 0;
}


