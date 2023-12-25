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
    int N1; cin>>N1;
    int N2; cin>>N2;

    cout<<HCF(N1,N2)<<endl;

    return 0;
}