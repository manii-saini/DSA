#include<iostream>
using namespace std;
int main(){
    int pos=0,neg=0,zero=0;
    int num;
    int i=1;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    while(i<=10)
    {
        cin>>num;
        if(num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }
        else{
            zero++;
        }
        i++;
    }
    cout<<"The Total all positive number is:"<<pos++<<endl;
    cout<<"The Toatl all negative number is:"<<neg++<<endl;
    cout<<"The Total all zero number is:"<<zero++<<endl;
    return 0;
}