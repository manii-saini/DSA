#include<iostream>
using namespace std;
int Ap(int n)
{
    int fun=(3*n+7);
    return fun;
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    cout<<"The nth term  of Ap is:"<<Ap(n)<<endl;
    return 0;
}