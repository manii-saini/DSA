#include<iostream>
using namespace std;
// char tolowercase(char ch)
// {
//     if(ch>='A' && ch<='Z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp=ch-'A'+'a';
//         return temp;
//     } 
// }
int plandrome(char ch[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        if(ch[start]!=ch[end])
        {
            return 0;
        }
        else if(ch[start]=='@' || ch[start]== '#' || ch[start]=='&')
        {
            start++;

        }
        else if(ch[end]=='@' || ch[end]== '#' || ch[end]=='&')
        {
            end--;
        }
        else
        {
            start++;
            end--;
        }
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
int length(char ch[])
{
    int length=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char ch[20];
    cout<<"Enter your name:"<<endl;
    cin>>ch;
    cout<<"Lemgth of the string is:"<<length(ch)<<endl;
    int ans=length(ch);
    reverse(ch,ans);
    cout<<"The reverse string is:"<<ch<<endl;;
    cout<<"The number is planfrome or not "<<plandrome(ch,ans)<<endl;
}