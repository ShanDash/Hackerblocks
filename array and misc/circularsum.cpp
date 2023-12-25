#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int A[n];
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        int ans1=INT_MIN;
        int maxsum=0;
        for(int i=0; i<n; i++)
        {
            maxsum= max(A[i]+maxsum, A[i]);
            if(maxsum > ans1)
            {
                ans1 = maxsum;
            }
        }
        if(ans1 < 0)
        {
            cout<<ans1<<endl;
        }
        
        int ans2 = INT_MAX;
        int worstsum=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=A[i];
            worstsum= min(worstsum+A[i],A[i]);
            if(worstsum < ans2);
            {
                ans2 = worstsum;
            }
        }
        cout<<max(ans1,sum-ans2);
    }
    return 0;
}