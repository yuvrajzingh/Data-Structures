#include<iostream>
using namespace std;

int i, size, arr[10];

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

void maxSubArray()
{
    int max_sum, current_sum;

    max_sum=current_sum=0;

    for(i=0; i<size ; i++)
    {
        current_sum = current_sum + arr[i];

        if(current_sum > max_sum)
        {
            max_sum = current_sum;
        }

        if(current_sum < 0)
        {
            current_sum = 0;
        }

    }

    cout<<"largest sum of contiguous array is : "<< max_sum;

}

int main()
{
    inputArray();
    maxSubArray();

    return 0;
}