#include<iostream>
using namespace std;
void counting(int n)
{
    if(n==0)
    {
        return;
    }
    // tail
    cout<<n<<endl;
    counting(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    counting(n);
    return 0;
}