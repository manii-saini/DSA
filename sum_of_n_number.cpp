#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    int sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"num="<<num<<endl;
    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The value of sum is:"<<sum<<endl;
    return 0;
}