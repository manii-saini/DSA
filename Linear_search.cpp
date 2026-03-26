#include<iostream>
using namespace std;
int Linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"Find the index of 3 is:"<<Linearsearch(arr,5,3)<<endl;
    return 0;
}