#include<iostream>
#include<vector>
using namespace std;
int pair_sum(int arr[],int size,int s)
{
    vector<vector<int>> ans;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // sort(ans.begin(),ans.end());
    // return ans;
}
int main()
{
    int n=5;
    int arr[5];
    cout<<"Enter a number:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The number of pairs is:"<<pair_sum(arr,n,6);
    return 0;
}