#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    int B[n][n];

    for(int col=n-1,rowB=0; col>=0 && rowB<n; col--, rowB++)
    {
        for(int row=0, colB=0; row<n && colB<n; row++, colB++)
        {
            B[rowB][colB]=A[row][col];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }  
    return 0;
}