#include<iostream>
using namespace std;
int main()
{
    int i,ans=1;
    int base,expo;
    cout<<"Enter your base:";
    cin>>base;
    cout<<endl<<"Enter your exponment:";
    cin>>expo;
    for(i=1;i<=expo;i++)
    {
        ans=ans*base;
    }
    cout<<endl<<"The answers is:"<<ans<<endl;
    return 0;
}