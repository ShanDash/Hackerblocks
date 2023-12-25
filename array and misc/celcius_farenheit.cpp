#include<iostream>
using namespace std;

int main()
{
    int min; cin>>min;
    int max; cin>>max;
    int diff; cin>>diff;
    for(int i=min; i<=max; i+=diff)
    {
        int celcius=((i-32)*5)/9;
        cout<<i<<"\t"<<celcius<<endl;
    }
    return 0;
}
