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

int main()
{
    int n; cin>>n;
    int sum=0;

    int x= noofdigits(n);
    int i=0;

    while((i<x)&&n>0)
    {
        int digit= n%10;

        sum+=(digit)*(pow(2,i));
        i+=1;

        n=n/10;
    }
    cout<<sum<<endl;

    return 0;

    
}