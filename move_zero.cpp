#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,3,0,4,5};
    int nonzero=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[nonzero]);
            nonzero++;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}