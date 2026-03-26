#include<iostream>
using namespace std;
int main()
{
    char ch[20];
    cout<<"Enter your name:"<<endl;
    cin>>ch;
    int length=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        cout<<ch[i]<<" ";
        length++;
    }
    cout<<"Length of the string is: "<<length<<endl;
}