#include<iostream>
#include<cmath>
using namespace std;

int digits(int n)
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
    int a=digits(n);

    int b=n;

    int sum=0;
    while(n>0)
    {
        sum+=pow((n%10),a);
        n=n/10;
    }
    
    if(sum==b)
    {
       cout<<"true"<<endl;
    }
    else
    {
       cout<<"false"<<endl;
    }

    return 0;
    
}