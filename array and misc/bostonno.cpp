#include<iostream>
using namespace std;

int sumofdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }

    return sum;
}

int sumoffactors(int n)
{
    int sum1=0;
    for(int i=2; i*i<n; i+=1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                sum1+=sumofdigits(i);
                n=n/i;
            }
        }
    }

    if(n>1)
    {
        sum1+=sumofdigits(n);
    }

    return sum1;
}

int main()
{
    int n; cin>>n;

    if(sumofdigits(n)==sumoffactors(n))
    {
        cout<<1<<endl;

    }
    else
    {
        cout<<0<<endl;
    }

    return 0;

    
}