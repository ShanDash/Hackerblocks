#include<iostream>
using namespace std;

int main()
{
    int R,C; cin>>R>>C;
    int A[R][C];
    
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j+=1)
        {
            cin>>A[i][j];
        }
    }

    int SR=0; ///start row
    int SC=0; ///start column
    int ER=R-1; ///end row
    int EC=C-1; ///end column
    
    int count=0;
    while((SR<=ER) && (SC<=EC) && (count<=R*C))
    {
        for(int i=SR; i<=ER; i+=1)
        {
            cout<<A[i][SC]<<", ";
            count+=1;
        }
        SC+=1;

        for(int i=SC; i<=EC; i++)
        {
            cout<<A[ER][i]<<", ";
            count+=1;
        }
        ER-=1;

        for(int i=ER; i>=SR; i--)
        {
            cout<<A[i][EC]<<", ";
            count+=1;
        }
        EC-=1;

        for(int i=EC; i>=SC; i--)
        {
            cout<<A[SR][i]<<", ";
            count+=1;
        }
        SR+=1;
    }

    cout<<"END";

    return 0;

}