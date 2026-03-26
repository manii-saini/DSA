#include<iostream>
using namespace std;
int main()
{
    int num,digit,sum=0,product=1;
    cout<<"Enter a number:";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        product=product*digit;
        sum=sum+digit;
        num=num/10;
    }
    int ans=product-sum;
    cout<<"The substruct the product and sum of a digit:"<<ans<<endl;
    return 0;
}