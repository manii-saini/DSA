#include<iostream>
using namespace std;
int getsum(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int nextterm=getsum(arr+1,size-1);
    int sum=arr[0]+nextterm;
    return sum;
}
int main()
{
    int arr[5]={2,3,4,5,6};
    int ans=getsum(arr,5);
    cout<<"sum:"<<ans<<endl;
    return 0;
}