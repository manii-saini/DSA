#include<iostream>
using namespace std;
int main()
{
    int notes;
    cout<<"Enter which type of not:"<<endl;
    cin>>notes;
    switch(notes)
    {
        case 100:
            int count_100_notes;
            count_100_notes=1330/100;
            cout<<"How many 100 notes is:"<<count_100_notes<<endl;
            int remaing_rupes;
            remaing_rupes=1330%100;
            cout<<"Reaming rupes is:"<<remaing_rupes<<endl;

        case 50:
            int count_50_notes;
            count_50_notes=remaing_rupes/50;
            cout<<"How many 50 notes is:"<<count_50_notes<<endl;
            remaing_rupes=remaing_rupes%50;
            cout<<"Reaming rupes is:"<<remaing_rupes<<endl;

        case 20:
            int count_20_notes;
            count_20_notes=remaing_rupes/20;
            cout<<"How many 20 notes is:"<<count_20_notes<<endl;
            remaing_rupes=remaing_rupes%20;
            cout<<"Reaming rupes is:"<<remaing_rupes<<endl;
        case 10:
            int count_10_notes;
            count_10_notes=remaing_rupes/10;
            cout<<"How many 10 notes is:"<<count_10_notes<<endl;
            remaing_rupes=remaing_rupes%10;
            cout<<"Reaming rupes is:"<<remaing_rupes<<endl;
            break;

    }
    return 0;
}
