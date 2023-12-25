#include<iostream>
using namespace std;

int HCF(int N1, int N2)
{
    if(N1==0)
    {
        return N2;
    }
    if(N2==0)
    {
        return N1;
    }
    if(N1==N2)
    {
        return N1;
    }
    if(N1>N2)
    {
        return HCF(N1-N2,N2);
    }
    else
    {
        return HCF(N1,N2-N1);
    }
}

int main()
{
    int a; cin>>a;
    int b; cin>>b;

    int x= HCF(a,b);

    cout<<((a*b)/x)<<endl;

    return 0;
}