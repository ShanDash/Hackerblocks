#include<iostream>
using namespace std;

void bubblesort(int *A,int n)
{
    for(int i=0; i<=n-2; i+=1)
    {
        for(int j=0; j<=n-2-i; j+=1)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }

}

int main()
{
    int n; cin>>n;
    int A[n];

    for(int i=0; i<n; i+=1)
    {
        int x; cin>>x;
        A[i]=x;
    }

    bubblesort(A,n);

    for(int i=0; i<n; i+=1)
    {
        cout<<A[i]<<"\n";
    }

    return 0;
}