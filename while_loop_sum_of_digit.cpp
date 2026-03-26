#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int sum=0,digit;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<"The sum of digit of n number is:"<<sum<<endl;
    return 0;
}