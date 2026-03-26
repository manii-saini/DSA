#include<iostream>
#include<map>
using namespace std;
int unique_element(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;
    int arr[5];
    cout<<"Enter a number:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The unique element is:"<<unique_element(arr,n)<<endl;
    return 0;
}