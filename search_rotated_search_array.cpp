#include<iostream>
using namespace std;
#include<vector>
int Binarysearch(vector<int> arr,int start,int end,int key)
{
    start=0;
    end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int getpivot(vector<int> arr,int size)
{
  int start=0;
  int end=size-1;
  int mid=start+(end-start)/2;
  while(start<end)
  {
    if(arr[mid]>=arr[0])
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
int search_rotated_array(vector<int> arr,int n,int target)
{
  int pivot=getpivot(arr,5);
  if(target>=arr[pivot] && target<=arr[n-1])
  {
    return Binarysearch(arr,pivot,n-1,target);
  }
  else
  {
    return Binarysearch(arr,0,pivot-1,target);
  }
}
int main()
{
  vector<int> arr={7,9,1,2,3};
  cout<<"The element found at:"<<search_rotated_array(arr,5,1)<<endl;
  return 0;
}