#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int A[n];

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int left[n];
    left[0]=A[0];
    for(int i=1; i<n; i++)
    {
        left[i]=max(left[i-1],A[i]);
    }

    int right[n];
    right[n-1]=A[n-1];
    for(int i=n-2; i>=0; i--)
    {
        right[i]=max(right[i+1],A[i]);
    }

    int ans=0;

    for(int i=0; i<n; i++)
    {
        ans+=min(right[i],left[i])-A[i];
    }

    cout<<ans;
    return 0;

}