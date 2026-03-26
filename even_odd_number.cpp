#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"number is:"<<num<<endl;
    if(num%2==0)
    {
        cout<<"The number is even:"<<num<<endl;
    }
    else{
        cout<<"The number is odd:"<<num<<endl;
    }
    return 0;
    
}