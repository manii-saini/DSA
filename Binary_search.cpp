#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
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
    return -1;
}
int main()
{
    int even[6]={2,5,8,9,11,14};
    int odd[5]={4,7,9,11,13};
    cout<<"The index of 8 is:"<<Binarysearch(even,6,8)<<endl;
    cout<<"The index of 9 is:"<<Binarysearch(odd,5,9)<<endl;
    return 0;
}