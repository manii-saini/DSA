#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(size-top>=1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack is overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"stack is underflow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"stack is not empty"<<endl;
        }
    }

};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Top element is:"<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is:"<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is:"<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is:"<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is:"<<s.peek()<<endl;
    s.pop();
    return 0;
}