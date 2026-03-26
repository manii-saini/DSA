#include<iostream>
using namespace std;
int main()
{
    int num,i=2;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"num="<<num<<endl;
    while(i<=20)
    {
        if(num%i==0)
        {
            cout<<"Number is not prime"<<endl;
            break;
        }
        else
        {
            cout<<"number is prime"<<endl;
            break;
        }
        i++;
    }
    return 0;
}