#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cout<<"Enter the rows : ";
    cin>>r;
    cout<<"Enter the columns : ";
    cin>>c;

    int a[r][c];

    cout<<"Enter the matrix : "<<endl;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=i; j<c; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp; 
        }
    } 

    cout<<"Transpose of the matrix: "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}