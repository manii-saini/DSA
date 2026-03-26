#include<iostream>
using namespace std;
long long squareroot(int n)
{
  int start=0;
  int end=n;
  int mid=start+(end-start)/2;
  long long  ans=-1;
  while(start<=end)
  {
    long long square=mid*mid;
    if(square==n)
    {
      return mid;;
    }
    else if(square>n)
    {
      end=mid-1;

    }
    else
    {
      ans=mid;
      start=mid+1;
    }
    mid=start+(end-start)/2;
  }
  return ans;
}
int main()
{
    int n;
    cout<<"Enter the number to find the squre root in binary search:"<<endl;
    cin>>n;
    cout<<"The square root of "<<n<<" is:"<<squareroot(n)<<endl;
}
























