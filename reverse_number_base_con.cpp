#include<iostream>
using namespace std;
int main()
{
    int num,digit,ans=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"num:"<<num<<endl;
    while(num!=0)
    {
        digit=num%10;
        ans=ans*10+digit;
        num=num/10;
    }
    cout<<"The ans is:"<<ans<<endl;
    return 0;
}