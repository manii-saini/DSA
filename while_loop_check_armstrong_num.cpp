#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,cube;
    cout<<"Enter a number:";
    cin>>num;
    int digit,rev=0;
    int temp=num;
    while(num>0)
    {
        digit=num%10;
        cube=digit*digit*digit;
        sum=sum+cube;
        num=num/10;
    }
    if(sum==temp)
        cout<<"The number is armstrong ."<<endl;
    else
        cout<<"The number is not armstrong ."<<endl;
    return 0;
}