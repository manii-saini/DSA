// #include<iostream>
// using namespace std;

// int count_set_bits(int a)
// {
//         int count1=0;
//         int change_binary(int a)
//         {
//             int mask=0;
//             while(a!=0)
//              {
//                  mask=(mask >> 1) | 1;
//                  a=a >> 1;
//             }
//             int ans=(~a) & mask;
//             return ans;
//         }
//         while(a!=0)
//         {
//             int ans = a & 1;
//             a >> 1;
//             if(ans==1)
//             {
//                 count1++;
//             }
//         }
//         return count1;
// }
// int main()
// {
//     int a;
//     cout<<"Enter a number:"<<endl;
//     cin>>a;
//     cout<<"The number of setbits in a number is:"<<count_set_bits(a)<<endl;
//     return 0;
// }