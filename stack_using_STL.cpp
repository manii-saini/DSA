#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"size:"<<s.size()<<endl;
    cout<<"Top element:"<<s.top()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    if(s.empty())
    {
        cout<<"stack is empty:"<<endl;
    }
    else
    {
        cout<<"stack is not empty:"<<endl;
    }
}