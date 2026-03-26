#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"num="<<num<<endl;
    if(num==1)
    {
        cout<<"monday"<<endl;
    }
    else if(num==2)
    {
        cout<<"tuesday"<<endl;
    }
    else if(num==3)
    {
        cout<<"wednesday"<<endl;
    }
    else if(num==4)
    {
        cout<<"thrusday"<<endl;
    }
    else if(num==5)
    {
        cout<<"friday"<<endl;
    }
    else if(num==6)
    {
        cout<<"satursday"<<endl;
    }
    else if(num==7)
    {
        cout<<"sunday"<<endl;
    }
    else{
        cout<<"invalid day"<<endl;
    }
    return 0;
}