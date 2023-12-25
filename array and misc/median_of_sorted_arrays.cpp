#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n];
    int B[n];
    int C[n];
    int k=0;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        C[i]=A[i];
        k+=1;
    }
    for(int i=0; i<n;i++)
    {
        cin>>B[i];
        C[n+i]=B[i];
        k+=1;
    }
    int median=0;
    int idx=0;
    int a=0;
    int b=0;
    sort(C,C+k);
    if(k%2!=0)
    {
        idx=(k+1)/2-1;
        median=C[idx];
    }
    else
    {
        a=(k)/2-1;
        b=(k/2);
        median=(C[a]+C[b])/2;
    }
    cout<<median;
    return 0;
}