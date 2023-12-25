#include<iostream>
using namespace std;

int main()
{
    int m,n; cin>>m>>n;
    int A[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j+=1)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<n; j+=1)
            {
                cout<<A[i][j]<<", ";
            }
        }
        else
        {
            for(int j=n-1; j>=0; j-=1)
            {
                cout<<A[i][j]<<", ";
            }
        }
    }
    cout<<"END";

    return 0;
    
}
