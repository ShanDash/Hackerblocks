#include<iostream>
using namespace std;

// This function multiplies x with the number 
// represented by res[]. 
// res_size is size of res[] or number of digits in the 
// number represented by res[]. This function uses simple 
// school mathematics for multiplication. 
// This function may value of res_size and returns the 
// new value of res_size 
void multiply(int* fact,int x,int &idx)
{
    int carry=0;   // Initialize carry 
   // One by one multiply n with individual digits of res[] 

    for(int i=0;i<=idx;i++)
    {
        int res=fact[i] * x + carry;   // Store last digit of 'prod' in res[] 
        fact[i]=res%10;
        carry=res/10;     // Put rest in carry 
    }
     
    // Put carry in res and increase result size 
    while(carry > 0)
    {
        idx++;
        fact[idx]=carry%10;
        carry/=10;
    }
}

int main()
{
    int n; cin>>n;
    int fact[1500]={0};

    fact[0]=1;
    int idx=0;
    for(int x=1;x<=n;x++)
    {
        multiply(fact,x,idx);
    }

    for(int i=idx;i>=0;i--) cout<<fact[i];

    return 0;
}