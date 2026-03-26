#include<iostream>
using namespace std;
int main()
{   
    int i,num;
    cout<<"Enter a numebr:"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}