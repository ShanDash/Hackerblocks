#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int noofdigits(int n)
{
    int count=0;
    while(n>1)
    {
        count+=1;
        n=n/10;
    }
    return count;
}

bool comp(int a,int b)
{
    int n = a*pow(10,noofdigits(b))+b;
    int m = b*pow(10,noofdigits(a))+a;
    if(n>m)
    {
        return true;
    }
    
    return false;
    
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
        sort(A,A+n,comp);  
        
        for(int i=0; i<n; i++)
        {
            cout<<A[i];
        }
    }
    return 0;
}