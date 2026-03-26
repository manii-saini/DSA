#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<i<<endl;
        if(i==5)
        {
            break;
        }
    }
    return 0;
}