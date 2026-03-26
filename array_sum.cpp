#include<iostream>
using namespace std;
void sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    cout<<"sum:"<<sum<<endl;
}
int main()
{
    int n=10;
    int arr[n];
    cout<<"Enter a number:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum(arr,n);
    return 0;
}