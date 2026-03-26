#include<iostream>
using namespace std;
int find_peak_element(int arr[],int size)
{
    int start=0; 
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    int arr[4]={3,4,5,1};
    cout<<"The peak element index is:"<<find_peak_element(arr,4)<<endl;
    return 0;
}