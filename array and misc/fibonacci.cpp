#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int a= (n*(n+1))/2;
    int A[a];
    A[0]=0;
    A[1]=1;
    
    for(int i=2; i<a; i++)
    {
        A[i]=A[i-1]+A[i-2];
    }
    for(int i=0; i<a; i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}