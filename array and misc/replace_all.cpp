#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int reverse(int n)
{
    while(n>=1)
    {
        cout<<n%10;
        n=n/10;
    }
    return 0;
}
int main()
{
    int n; cin>>n;
    int a=reverse(n);

    while(a>=1)
    {
        if((a%10)==0)
        {
            cout<<5;
        }
        else
        {
            cout<<a%10;
        }
        a=a/10;
    }

    return 0;
}
