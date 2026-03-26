#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of all number is:"<<sum<<endl;
    return 0;
}