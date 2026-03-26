#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i-j; 
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}