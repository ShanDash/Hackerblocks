#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    int freq[max+1]={0};
    for(int i=0; i<n; i++)
    {
        int cur_elem=A[i];
        freq[cur_elem]++;
    }
    int idx=0; // represents which index is being assigned value currently

    for(int i=0; i<=max; i++)
    {
        for(int j=1; j<=freq[i]; j++)
        {
            A[idx]=i;
            idx++;
        }
    }
    for(int i=0; i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}       