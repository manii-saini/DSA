#include<iostream>
using namespace std;
int intersection(int arr1[],int size1,int arr2[],int size2)
{
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={3,4,5};
    intersection(arr1,5,arr2,3);
    return 0;
}