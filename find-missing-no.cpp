#include <iostream>
using namespace std;
 
int MissingNumber(int *arr1, int ar_size) 
{
    int i, sum = 0, n = ar_size + 1; 
    for(i = 0; i < ar_size; i++)
	{
        sum = sum + arr1[i];
    }
   
    return (n*(n+1))/2 - sum;
}
 
int main()
{
    int i;
    int arr1[] = {1, 3, 4, 2, 5, 6, 9, 8};
 
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"The given array is :  ";

	for(i = 0; i < ctr; i++)
	{
	cout<<arr1[i]<<" ";
    } 
    cout<<"\n";
 
 cout<<"The missing number is : "<<MissingNumber(arr1, ctr);
 return 0;
}