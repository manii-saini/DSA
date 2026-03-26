#include<iostream>
using namespace std;
int partation(int arr[],int start,int end)
{
  int idx=start-1;
  int pivot=arr[end];
  for(int j=start;j<end;j++)
  {
    if(arr[j]<=pivot)
    {
      idx++;
      swap(arr[j],arr[idx]);
    }
  }
  idx++;
  swap(arr[idx],arr[end]);
  return idx;
}
void quick_sort(int arr[],int start,int end)
{
  if(start<end)
  {
    int pindex=partation(arr,start,end);
    quick_sort(arr,start,pindex-1);
    quick_sort(arr,pindex+1,end);
  }
}
void print(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[6]={5,2,6,4,1,3};
  quick_sort(arr,0,5);
  print(arr,6);
  return 0;
}