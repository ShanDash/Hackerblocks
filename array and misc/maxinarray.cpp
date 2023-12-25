#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n];
    int max= INT_MIN;

    for(int i=0;i<n; i+=1)
    {
        int x; cin>>x;
        A[i]=x;
    }

    for(int i=0; i<n; i+=1)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }

    cout<<max<<endl;

    return 0;

}