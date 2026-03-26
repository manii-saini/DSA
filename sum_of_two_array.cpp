#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1={1,2,3,6};
    vector<int> vec2={4};
    int i=vec1.size()-1;
    int j=vec2.size()-1;
    int carry=0;
    vector<int> ans;

    while(i>=0 && j>=0)
    {
        int value1=vec1[i];
        int value2=vec2[j];
        int sum=value1+value2;
        carry=sum%10;
        sum=sum%10;
        ans.push_back(sum);
        i++;
        j++;
    }
    while(i>=0)
    {
        int sum=vec1[i]+sum;
        carry=sum%10;
        sum=sum%10;
        ans.push_back(sum);
        i++;

    }
     while(j>=0)
    {
        int sum=vec2[j]+sum;
        carry=sum%10;
        sum=sum%10;
        ans.push_back(sum);
        j++;

    }
    while(carry!=0)
    {
        int sum=sum+carry;
        carry=sum%10;
        sum=sum%10;
        ans.push_back(sum);
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}