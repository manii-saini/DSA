#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"a="<<a<<endl;
    int b;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"b="<<b<<endl;
    int c;
    cout<<"Enter third number:"<<endl;
    cin>>c;
    cout<<"c="<<c<<endl;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is biggest"<<endl;
        }
    }
    else{
        cout<<"C is biggest"<<endl;
    }
    if(b>a)
    {
        if(b>c)
        {
            cout<<"B is biggest"<<endl;
        }
    }
    else 
    {
        cout<<"C is biggest"<<endl;
    }
    return 0;
}