#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to convert from decimal to binary:"<<endl;
    cin>>n;
    
    int ans=0;
    int i=1;
    
    while(n>0)
    {
        int bit=n%2;
        ans=ans+(bit*i);
        n=n/2;
        i=i*10;
    }
    
    cout<<"The binary equivalent is: "<<ans<<endl;
    return 0;
}
