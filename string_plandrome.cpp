#include<iostream>
using namespace std;
int plandrome(char ch[],int n)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        if(ch[start]!=ch[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
void reverse(char ch[],int n)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}
int main()
{
    char ch[20];
    cout<<"Enter your name:"<<endl;
    cin>>ch;
    int length=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        length++;
    }
    cout<<"Lemgth of the string is:"<<length<<endl;
    int ans=length;
    reverse(ch,length);
    cout<<"The reverse string is:"<<ch<<endl;;
    cout<<"The number is planfrome or not "<<plandrome(ch,length)<<endl;
}