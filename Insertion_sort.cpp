#include<iostream>
using namespace std;
void insertion_sort(int arr[],int size)
{
  for(int i=1;i<size;i++)
  {
    int temp=arr[i];
    int j=i-1;
    for(; j>=0;j--)
    {
      if(arr[j]>temp)
      {
        arr[j+1]=arr[j];
      }
      else
      {
        break;
      }
    }
    arr[j+1]=temp;
  }
}
void print(int arr[],int size)
{
  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[5]={2,4,1,8,6};
  insertion_sort(arr,5);
  print(arr,5);
  return 0;
}