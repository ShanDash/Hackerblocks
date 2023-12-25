#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    while(n>=1)
    {
        cout<<n%10;
        n=n/10;
    }
    return 0;
}