#include<iostream>
#include<climits>
using namespace std;
int Maximum(int arr[], int size)
{
    int max = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int Minimum(int arr[], int size)
{
    int min = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
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
    cout<<"The maximum element is:"<<Maximum(arr,n)<<endl;
    cout<<"The minimum element is:"<<Minimum(arr,n)<<endl;
    return 0;
}