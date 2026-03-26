#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int flag=1;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"The number is not prime:"<<num<<endl;
    }
    else
    {
        cout<<"The number is prime:"<<num<<endl;
    }
    return 0;
}