#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n];

    for(int i=0; i<n; i+=1)
    {
        int x; cin>>x;
        A[i]=x;
    }

    sort(A,A+n);

    int target; cin>>target;

    for(int i=0; i<n; i+=1)
    {
        for(int j=i+1; j<n; j+=1)
        {
            if((A[i]+A[j])==target)
            {
                cout<<A[i]<<" and "<<A[j]<<endl;
            }
        }
    }

    return 0;
}