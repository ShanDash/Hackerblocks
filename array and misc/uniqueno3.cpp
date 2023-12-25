#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int freq[31]={0};
    for(int i=0; i<n; i++)
    {
        int cur_ele=A[i];
        for(int j=0; j<31; j++)
        {
            if((cur_ele>>j)&1 == 1)
            {
                freq[j]++;
            }
        }
    }
    int ans=0;
    for(int i=0; i<31; i++)
    {
        ans+=(freq[i]%3)*(pow(2,i));
    }
    cout<<ans;
    return 0;
}