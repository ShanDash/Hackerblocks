#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int A[n];
 

    for(int i=0; i<n; i+=1)
    {
        int x; cin>>x;
        A[i]=x;
    }
    int m; cin>>m;

    int idx=-1;
    for(int i=0; i<n; i+=1)
    {
        if(A[i]==m)
        {

           idx=i;
        }

    }

    cout<<idx<<endl;
    return 0;
}