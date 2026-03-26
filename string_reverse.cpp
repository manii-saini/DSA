#include<iostream>
using namespace std;
void reverse(char ch[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}
void print(char ch[],int n)
{
    for(int i=0;ch[i]!='\0';i++)
    {
    cout<<ch[i]<<" ";
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
    int ans=length;
    reverse(ch,length);
    print(ch,length);

}