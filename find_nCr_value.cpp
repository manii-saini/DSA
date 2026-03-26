#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int demon=factorial(r)*factorial(n-r);

    int ans=num/demon;
    return ans;
}
int main()
{
    int n,r;
    cout<<"Enter two number:"<<endl;
    cin>>n>>r;
    cout<<"The value of ncr is:"<<nCr(n,r)<<endl;
    return 0;
}