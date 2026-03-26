#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,6,7,8,9};
    int start=0;
    int end=4;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}