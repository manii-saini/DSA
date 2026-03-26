#include<iostream>
using namespace std;
void fibonachi()
{
    int a=0,b=1,c;
    cout<<a<<" ";
    cout<<b<<" ";
    do
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    while(c<=20);
}
int main()
{
    fibonachi();
    return 0;
}