#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)+1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)+1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[6]={1,2,3,3,3,5};
    cout<<"The first occerence of 3 at index:"<<firstocc(arr,6,7)<<endl;
    cout<<"The last occerenece of 3 at index:"<<lastocc(arr,6,7)<<endl;
    return 0;
}