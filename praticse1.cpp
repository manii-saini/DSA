#include<iostream>
using namespace std;
class Heap
{
    public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int element)
    {
        size=size+1;
        int index=size;
        arr[index]=element;
        while(index>1)
        {
            int parent=index/2;
            if(arr[index]<arr[parent])
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
    void deleteFromBST()
    {
        if(size==0)
        {
            cout<<"Nothing to delete:"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int index=1;
        while(index<size)
        {
            int leftindex=2*index;
            int rightindex=2*index+1;
            if(leftindex<size && arr[index]<arr[leftindex])
            {
                swap(arr[index],arr[leftindex]);
                index=leftindex;
            }
            else if(rightindex<size && arr[index]<arr[rightindex])
            {
                swap(arr[index],arr[rightindex]);
                index=rightindex;
            }
            else
            {
                return;
            }
        }
    }
};
void Heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<<arr[right])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        Heapify(arr,n,largest);
    }
}
void Heapsort(int *arr,int n)
{
    int size=n;
    while(size>1)
    {
        arr[1],arr[size];
        size--;
        Heapify(arr,size,1);
    }
}
int main()
{
    Heap h;
    h.insert(50);
    h.insert(53);
    h.insert(54);
    h.insert(55);
    h.insert(52);
    h.print();
    h.deleteFromBST();
    cout<<"Deletion:"<<endl;
    h.print();
    int arr[6]={-1,55,50,54,53,52};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        Heapify(arr,n,i);
    }
    cout<<"Printing The element:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Heapsort(arr,n);
    cout<<"The quick sort is:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}