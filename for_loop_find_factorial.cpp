#include<iostream>
using namespace std;
int main()
{
    int i,f=1,num;
    cout<<"Enter a number:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    cout<<"The factoral is:"<<f<<endl;
    return 0;
}