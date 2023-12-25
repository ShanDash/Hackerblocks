#include<iostream>
using namespace std;

bool canbereadbystudent(int *books, int n, int S, int maxpages)
{
    int cur_sum=0;
    int cur_stu=1;
    
    for(int i=0; i<n; i++)
    {
        if(cur_sum+books[i]<=maxpages)
        {
            cur_sum+=books[i];
        }
        else
        {
            cur_stu+=1;
            if(cur_stu>S)
            {
                return false;
            }
            cur_sum=books[i];
        }
    }
    return true;
}
void solve()
{
    int n,S; cin>>n>>S;
    int books[n];
    int sum=0;
    int maxelement=0;
    for(int i=0; i<n; i++)
    {
        cin>>books[i];
        maxelement=max(maxelement,books[i]);
        sum+=books[i];
    }

    int ans=1e9;
    int s= maxelement;
    int e= sum;
    while(s<=e)
    {
        int mid= (s+e)/2;
        if (canbereadbystudent(books,n,S, mid))
        {
            ans= mid;
            e= mid-1;
        }
        else
        {
            s= mid+1;
        }
    }
    cout<<ans<<endl;
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