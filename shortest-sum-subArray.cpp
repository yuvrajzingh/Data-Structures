#include<iostream>
using namespace std;

int i, size, x, arr[10];

void inputArray()
{
    cout<<"enter the size of the array : ";
    cin>>size;
    for(i=0; i<size; i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i]; 
    }



}

void shortestSumSubArray()
{

    cout<<"Enter the value of x: ";
    cin>>x;

    int current_sum = 0, min_len = size+1;

    int start = 0,  end = 0;
    
    while(end<size)
    {
        while (current_sum<= x && end<size)
        {
            current_sum = current_sum + arr[end++];
        }

        while (current_sum > x && start < size)
        {
            if(end-start < min_len)
            {
                min_len = end - start;
            }

            current_sum = current_sum - arr[start++];
        }
        
    }
        cout<<min_len;
}

int main()
{
    inputArray();
    shortestSumSubArray();

    return 0;
}