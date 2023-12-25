#include<iostream>
using namespace std;

void solve()
{
    long long M,N;
    cin>>M>>N;
    
    long long aayush=0;
    long long harshit=0;    

    for(int i=1; i<=max(M,N);i++)
    {
        if(i%2==0)
        {
            if(harshit<=N)
            {
                harshit+=i;
            }
            else
            {
                cout<<"Aayush"<<endl;
                break;
            }
        }
        else
        {
            if(aayush<=M)
            {
                aayush+=i;
            }
            else
            {
                cout<<"Harshit"<<endl;
                break;
            }
        }
    }     
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}