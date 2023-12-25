#include<iostream>
#include<cmath>
using namespace std;

int noofdigits(int n)
{
    int count=0;
    while(n>0)
    {
        count+=1;
        n=n/10;
    }

    return count;

}

int decimal(int n)
{
    int x= noofdigits(n);
    int sum=0;
    int i=0;

    while((i<x)&&n>0)
    {
        int digit= n%10;
        sum+=(digit)*(pow(2,i));
        i+=1;

        n=n/10;
    }

    return sum;

}

int main()
{
    int n; cin>>n;

    for(int i=1; i<=n; i+=1)
    {
        int x; cin>>x;
        cout<<decimal(x)<<"\n";
    }

    return 0;
}