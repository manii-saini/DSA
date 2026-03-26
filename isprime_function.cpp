#include<iostream>
using namespace std;
bool isprime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(isprime(n))
    {
        cout<<"Number is prime:"<<endl;
    }
    else
    {
        cout<<"Number is not prime:"<<endl;
    }
    return 0;
}