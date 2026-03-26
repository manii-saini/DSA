#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int count=0;
    for(int i=0;i<32;i++)
    {
        if(num & (1<<i))
        {
            count++;
        }
    }
    cout<<"Number of one bits: "<<count<<endl;
    return 0;
}
