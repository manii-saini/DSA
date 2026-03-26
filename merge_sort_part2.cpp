#include<iostream>
using namespace std;
void merge_sort(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        j++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
void printarray(int arr3[],int o)
{
    for(int i=0;i<o;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={2,4,6,11,13};
    int arr3[9];
    merge_sort(arr1,5,arr2,5,arr3);
    printarray(arr3,10);
    return 0;
}