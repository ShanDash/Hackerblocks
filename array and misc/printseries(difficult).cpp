#include<iostream>
using namespace std;
int main()
{
    int n1; cin>>n1;
    int n2; cin>>n2;

    int i=1;
    int n=1;
    int extra=0;

    while(i<=(n1))
    {
        if((3*n+2)%n2!=0)
        {
            cout<<(3*n+2)<<endl;
            i+=1;
        }
        n+=1;       
    }

    return 0;
}








