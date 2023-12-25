#include<iostream>
using namespace std;

int koibit(int n)
{
    int ans=-1;
    for(int i=0; i<30; i+=1)
    {
        if((n>>i)&1==1)
        {
            ans=i;
            break;
        }
    }
    return ans;
}

int main()
{
    int n; cin>>n;
    int A[n];

    int XOR=0;

    for(int i=0;i<n;i+=1)
    {
        cin>>A[i];
        XOR=(XOR^A[i]);
    }

    int uniquebit=koibit(XOR);

    int ans1=0;
    int ans2=0;
    for(int i=0; i<n; i+=1)
    {
        if((A[i]>>uniquebit)&1==1)
        {
            ans1=(ans1^A[i]);
        }

        else
        {
            ans2=(ans2^A[i]);
        }
    }

    cout<<min(ans1,ans2)<<" "<<max(ans1,ans2)<<endl;

    return 0;
}