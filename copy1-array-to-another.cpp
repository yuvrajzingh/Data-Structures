#include <iostream>
using namespace std;

//copy the elements of an array into another array.

int main()
{
    int arr1[100], arr2[100];
    int i, n;
	   
       cout<<"Input the number of elements to be stored in the array : ";
        cin>>n;
   
       cout<<"Input" <<n<<" elements in the array :\n";
       for(i=0;i<n;i++)
        {
	      cout<<"element - "<<i<< " : ";
	      cin>>arr1[i];
	    }
    /* Copy elements of first array into second array.*/ 
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    /* Prints the elements of first array   */
    cout<<"\nThe elements stored in the first array are :\n";
    for(i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }

    /* Prints the elements copied into the second array. */
    cout<<"\n\nThe elements copied into the second array are :\n";
    for(i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
	       cout<<"\n\n";

   return 0;        
}