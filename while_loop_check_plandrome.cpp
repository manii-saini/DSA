#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int digit,rev=0;
    int temp=num;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(temp==rev)
        cout<<"The number is palindrome."<<endl;
    else
        cout<<"The number is not palindrome."<<endl;
    return 0;
}