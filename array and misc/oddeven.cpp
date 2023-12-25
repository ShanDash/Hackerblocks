#include<iostream>
using namespace std;
int sumofodd(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        if(digit%2!=0)
        {
            sum+=digit;
        }

        n=n/10;
    }
    return sum;
}

int sumofeven(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        if(digit%2==0)
        {
            sum+=digit;
        }

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

        int sum1= sumofeven(x);
        int sum2= sumofodd(x);

        if(((sum1)%4==0) || ((sum2)%3==0))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

    return 0;
}
