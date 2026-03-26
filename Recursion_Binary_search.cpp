#include<iostream>
using namespace std;
bool Binarysearch(int *arr,int s,int e,int key,int size)
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]<key)
    {
        return Binarysearch(arr,mid+1,e,key,size);
    }
    else
    {
        return Binarysearch(arr,s,mid-1,key,size);
    }
}
int main()
{
    int size=5;
    int key=9;
    int s=0;
    int e=size-1;
    int arr[size]={1,2,3,4,5};
    bool ans=Binarysearch(arr,s,e,key,size);
    if(ans)
    {
        cout<<"Element is Found:"<<endl;
    }
    else
    {
        cout<<"Element is not found:"<<endl;
    }
    return 0;
}