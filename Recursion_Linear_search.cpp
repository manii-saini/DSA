#include<iostream>
using namespace std;
bool Linearsearch(int *arr,int size,int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
        bool ans=Linearsearch(arr+1,size-1,key);
        return ans;
    }
}
int main()
{
    int size=5;
    int key=9;
    int arr[5]={1,2,3,4,5};
    int ans=Linearsearch(arr,size,key);
    if(ans)
    {
        cout<<"Key is found:"<<endl;
    }
    else
    {
        cout<<"Key is not found:"<<endl;
    }
    return 0;
}