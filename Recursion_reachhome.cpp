#include<iostream>
using namespace std;
void reachhome(int src,int dest)
{
    cout<<"source:"<<src<<" "<<"destination:"<<dest<<endl;
    //
    if(src==dest)
    {
        cout<<"pahuch gaya:"<<endl;
        return;
    }
    src++;
    reachhome(src,dest);
}
int main()
{
    reachhome(1,10);
    return 0;
}