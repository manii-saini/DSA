#include<iostream>
using namespace std;
int main()
{
    int i,n=10;
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(i=1;i<=n;i++)
    {
        int nextnumber=a+b;
        cout<<nextnumber<<" ";

        a=b;
        b=nextnumber;
    }
    return 0;
}