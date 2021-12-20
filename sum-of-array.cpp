#include<iostream>
using namespace std;

int main()
{
    
    int arr[100], size, i, sum = 0;
   
    cout<<"Enter array size\n";
    cin>>size;
    
    cout<<"Enter array elements\n";
    for(i = 0; i < size; i++)
          cin>>arr[i];

    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    cout<<"Sum of the array = "<<sum<<" \n";

    return 0;
}