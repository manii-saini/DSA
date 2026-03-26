#include<iostream>
using namespace std;
int main()
{
    int i,num;
    int max1=0,max2=0;
    cout<<"Enter a number:"<<endl;
    for(i=1;i<=10;i++)
    {
        cin>>num;
        cout<<num<<endl;
        if(i==1)
        {
            max1=num;
        }
        else if(num>max1)
        {
            max2=max1;
            max1=num;
        }
        else if(num>max2)
        {
            max2=num;
        }
    }
    cout<<"The first maximum number is:"<<max1<<endl;
    cout<<"The second maximum number is:"<<max2<<endl;
    return 0;
}