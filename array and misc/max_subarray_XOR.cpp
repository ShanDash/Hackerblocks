#include<iostream>
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

    int ans = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int cur_ele = A[i];
        int cur_XOR = 0;
        for(int j=i; j<n; j++)
        {
            cur_XOR = cur_XOR ^ A[j];   ///XOR ese hi lete he
            ans = max(ans,cur_XOR);
        }
    }
    cout<<ans<<endl;
    return 0;
}