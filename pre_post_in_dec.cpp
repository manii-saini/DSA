#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<"Pre-increment: "<<++a<<endl;
    //6 a=6
    cout<<"Post-increment: "<<a++<<endl;
    //6 a=7
    cout<<"Pre-decrement: "<<--a<<endl;
    //6 a=6
    cout<<"Post-decrement: "<<a--<<endl;
    //6 a=5
    return 0;
}