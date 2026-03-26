#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=5;
    int arr[5]={4,7,-5,9,1};
    reverse(arr,n);
    printarray(arr,n);
    return 0;
}