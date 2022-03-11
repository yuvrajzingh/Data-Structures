#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter the no. of rows and columns: "<<endl;
    cin>> n >> m;
    
    int target;
    cout<<"Enter the no. you're searching for: ";
    cin>>target;

    int matrix[n][m];

    cout<<"Enter the matrix: "<<endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int r=0, c=m-1;

    bool flag = false;
    
    while(r<n and c>=0)
    {
        if(matrix[r][c] == target)
        {
            flag = true;
        }
        if(matrix[r][c] < target)
        {
            r++;
        }
        else
        {
            c--;
        }  
    }
    if(flag)
            cout<<"Element found";
        else{
            cout<<"The Element does not exist in the matrix";
        }  
    return 0;
}