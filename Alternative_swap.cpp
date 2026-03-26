#include<iostream>
using namespace std;
void swap(int arr[])
{
    for(int i=0;i<=8;i=i+2)
    {
        for(int j=i+1;j<=9;j++)
        {
            swap(arr[i],arr[j]);
            break;
        }
    }
}
void printarray(int arr[])
{
    for(int i=0;i<=9;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    swap(arr);
    printarray(arr);
    return 0;
}