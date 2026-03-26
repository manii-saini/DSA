#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number:";
    cin>>num;
    int sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<"The number is perfect:"<<num<<endl;
    }
    else
    {
        cout<<"The number is not perfect:"<<endl;
    }
    return 0;
}