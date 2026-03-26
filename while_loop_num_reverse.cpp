#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int sum=0,digit,rev=0;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<"The sum of digit of n number is:"<<sum<<endl;
    cout<<"The reverse number is:"<<rev<<endl;
    return 0;
}