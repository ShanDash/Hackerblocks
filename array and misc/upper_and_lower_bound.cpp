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
    int t; cin>>t;
    while(t--)
    {
        int k; cin>>k;
        int count=0;
        for(int i=0; i<n;i++)
        {
            if(A[i]==k)
            {
                cout<<i<<" ";
                count+=1;
                break;
            }
        }
        for(int j=n-1; j>=0; j--)
        {
            if(A[j]==k)
            {
                cout<<j<<endl;
                count+=1;
                break;
            }
        }
        if(count==0)
        {
            cout<<"-1 "<<"-1"<<endl;
        }
    }
    return 0;
}