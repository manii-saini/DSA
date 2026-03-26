#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"a="<<a<<endl;
    int b;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"b="<<b<<endl;
    int c;
    cout<<"Enter thrid number:"<<endl;
    cin>>c;
    cout<<"c="<<c<<endl;
    if(a>b && a>c)
    {
        cout<<"A is biggest:"<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"B is biggest:"<<b<<endl;
    }
    else{
        cout<<"C is biggest:"<<c<<endl;
    }
    return 0;
}