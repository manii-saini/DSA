
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"number:"<<num<<endl;
    if(num>0)
    {
        cout<<"The number is positive"<<endl;
    }
    else if(num<0)
    {
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }
    return 0;
}