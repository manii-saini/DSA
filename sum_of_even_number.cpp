#include<iostream>
using namespace std;
int main(){
    int num,i=1,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"num="<<num<<endl;
    while(i<=num)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<"The sum of all even number is:"<<sum<<endl;
    return 0;
}