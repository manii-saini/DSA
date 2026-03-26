#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    if(a>b)
    {
        cout<<"A is grater than b"<<endl;
    }
    else{
        cout<<"B is greater then A"<<endl;
    }
    return 0;
}