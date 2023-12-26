#include<iostream>
using namespace std;

void insertionsort(int *A,int n)
{
    for(int i=1; i<=n-1; i+=1)
    {
        int current=A[i];

        int j=i-1;
        while(A[j]>current && j>=0)
        {
            A[j+1]=A[j];
            j-=1;
        }

        A[j+1]=current;
     
    }
}


int main()
{
    int n; cin>>n;
    int A[n];

    for(int i=0; i<n; i+=1)
    {
        cin>>A[i];
    }

    insertionsort(A,n);

    for(int i=0; i<n; i+=1)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}