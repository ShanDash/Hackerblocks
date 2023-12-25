#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i+=1)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    int target; cin>>target;
    
    for(int i=0; i<n; i+=1)
    {
        target-=A[i];
        for(int j=i+1; j<n; j+=1)
        {
            for(int k=j+1; k<n; k+=1)
            {
                if(A[j]+A[k]==target)
                {
                    cout<<A[i]<<", "<<A[j]<<" and "<<A[k]<<endl;
                }
            }
        }
    }

    return 0;
} 

////method 2///(upar galat he)

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i+=1)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    int target; cin>>target;
    for(int fix=0; fix<n; fix+=1)
    {
        int newtarget= target-A[fix];
        int i= fix+1; 
        int j= n-1;

        while(i<j)
        {
            if(A[i]+A[j]==newtarget)
            {
                cout<<A[fix]<<", "<<A[i]<<" and "<<A[j]<<endl;
                i+=1;
                j+=1;
            }
            else if(A[i]+A[j]<newtarget)
            {
                i+=1;
            }
            else{
                j--;
            }
        }
    }

    return 0;


}    