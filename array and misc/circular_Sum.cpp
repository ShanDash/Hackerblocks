#include<iostream>
#include<climits>
using namespace std;
int max_circular(int *A, int n)
{
    int max_sum= INT_MIN;
    int curr=0;
    for(int i=0; i<n; i++)
    {
        curr= max(A[i],A[i]+curr);
        if(curr > max_sum)
        {
            max_sum = curr;
        }
    }

    int min_sum= INT_MAX;
    int curr1=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=A[i];
        curr1 = min(A[i],A[i]+curr1);
        if(curr1 < min_sum)
        {
            min_sum = curr1;
        }
    }
    int ans = max(max_sum, sum - min_sum);
    return ans;
}

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
        cout<<max_circular(A,n)<<endl;
    }
    return 0;
}    