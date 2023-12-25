#include<iostream>
using namespace std;
int binary(int n)
{
    int n; cin>>n;

    while(n>=1)
    {
        cout<<n%2;
        n=n/2;
    }
}
int main()
{
    int n; cin>>n;
    int a= binary(n);

    cout<<"binary of n is: "<<a<<endl;

    return 0;
}


