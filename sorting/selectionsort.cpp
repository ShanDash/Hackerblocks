#include<iostream>
using namespace std;

void selectionsort(int *A,int n)
{
    for(int i=0; i<=n-2; i+=1)
    {
        int minindex=i;
        for(int j=i+1; j<=n-1; j+=1)
        {
            if(A[j]<A[minindex])
            {
                minindex=j;
            }
        }

        swap(A[i],A[minindex]);
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

    selectionsort(A,n);

    for(int i=0; i<n; i+=1)
    {
        cout<<A[i]<<"\n";
    }

    return 0;
}