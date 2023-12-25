#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n];
    int B[n];
    int C[n];

    for(int i=0; i<n; i+=1)
    {
        cin>>A[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>B[i];
    }

    sort(A,A+n);
    sort(B,B+n);
    int k=0;
    int i=0;
    int j=0;
    while(i<n && j<n)
    {
       
            if(A[i]==B[j])
            {
                C[k]=A[i];
                k+=1;
                i++;
                j++;
            }
            else if(A[i]>B[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    
    cout<<"[";
    for(int i=0; i<k-1; i++)
    {
        cout<<C[i]<<", ";
    }
    cout<<C[k-1]<<"]";

    return 0;

}