#include <iostream>
using namespace std;



int main()
{
   int array[100], position, c, n;

   cout<<"Enter number of elements in array\n";
   cin>>n;

   cout<<"Enter "<<n<<" elements\n";

   for (c = 0; c < n; c++)
      cin>>array[c];

   cout<<"Enter the location where you wish to delete element\n";
   cin>>position;

   if (position >= n+1)
      cout<<"Deletion not possible.\n";
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      cout<<"array after deletion :\n";

      for (c = 0; c < n - 1; c++)
         cout<<array[c]<<" ";
   }

   return 0;
}