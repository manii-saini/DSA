#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:"<<endl;
    cin>>ch;
    cout<<"character is:"<<ch<<endl;
    if(ch>='A' && ch<='Z')
    {
        cout<<"Uppercase Letter"<<endl;
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"Lowercase Letter"<<endl;
    }
    else{
        cout<<"numeric number"<<endl;
    }
    return 0;
}