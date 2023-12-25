#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int octal=0;
    int i=1;
    while(n>0)
    {
        int remainder= n%8;
        octal += remainder*i;
        i=i*10;
        n=n/8;
    }
    cout<<octal;
    return 0;
}