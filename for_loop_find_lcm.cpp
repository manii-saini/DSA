#include<iostream>
using namespace std;
int main()
{
    int start,end;
    int a;
    cout<<"Enter first number:";
    cin>>a;
    cout<<endl;
    int b;
    cout<<"Enter second number:";
    cin>>b;
    if(a>b)
    {
        start=a;
    }
    else
    {
        start=b;
    }
    end=a*b;
    for(int i=start;i<=end;i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout<<"The LCM  is:"<<i<<endl;
            break;
        }
    }
    return 0;
}