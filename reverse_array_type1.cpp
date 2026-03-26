#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter a number:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing the array:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }


    for(int i=0;i<=8;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    cout<<"After the reverse the array:"<<endl;
    for(int i=0;i<=9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}