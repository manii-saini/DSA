#include<iostream>
using namespace std;
void counting(int num)
{
    for(int i=1;i<=num;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    counting(n);
    return 0;
}