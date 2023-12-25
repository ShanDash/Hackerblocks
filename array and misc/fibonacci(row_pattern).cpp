#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int row=1;
    int max_in_row=1;
    int first_no=0;
    int second_no=1;

    while(row<=n)
    {
        int cur_in_row=1;
        while(cur_in_row <= max_in_row)
        {
            cout<<first_no<<"\t";
            int third_no = first_no + second_no;
            first_no = second_no;
            second_no = third_no;
            cur_in_row+=1;
        }
        max_in_row+=1;
        row+=1;
        cout<<endl;
    }
    return 0;
}