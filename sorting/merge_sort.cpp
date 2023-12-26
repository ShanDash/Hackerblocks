#include<iostream>
using namespace std;

void merge(int *A, int s, int e)
{
    int mid = (s+e)/2;
    int C[e-s+1];
    int idx=0;
    int i=s; int j=mid+1;

    while(i<=mid && j<=e)
    {
        if(A[i]<=A[j])
        {
            C[idx]=A[i];
            idx++;
            i++;
        }
        else
        {
            C[idx]=A[j];
            idx++;
            j++;
        }
    }
//// JO BACH GAYE UNKO DAALNE KE LIE
    while(i<=mid)
    {
        C[idx]=A[i];
        idx++;
        i++;
    }

    while(j<=e)
    {
        C[idx]=A[j];
        idx++;
        j++;
    }

    idx=0;
    for(int i=s; i<=e; i++)
    {
        A[i]=C[idx++];
    }
}

void merge_sort(int *A, int s, int e)
{
    if(s>=e)  return;

    int mid=(s+e)/2;

    merge_sort(A,s,mid);
    merge_sort(A,mid+1,e);

    merge(A,s,e);
}

int main()
{
    int n; cin>>n;
    int A[n];

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    merge_sort(A,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}