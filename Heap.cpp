#include<iostream>
#include<queue>
using namespace std;
class Heap
{
  public:
  int arr[100];
  int size;
  Heap()
  {
    size=0;
    arr[0]=1;
  }
  void insert(int val)
  {
    size=size+1;
    int index=size;
    arr[index]=val;
    while(index>1)
    {
      int parent=index/2;
      if(arr[parent]>arr[index])
      {
        swap(arr[index],arr[parent]);
        index=parent;
      }
      else
      {
        return;
      }
    }
  }
  void print()
  {
    for(int i=1;i<=size;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main()
{
  Heap h;
  h.insert(55);
  h.insert(50);
  h.insert(52);
  h.insert(54);
  h.insert(53);
  h.print();
  return 0;
}