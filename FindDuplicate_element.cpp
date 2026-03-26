#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i <= size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i <= size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int n;
    int arr[5];
    cout << "Enter a number:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "The duplicate element is:" << findDuplicate(arr, n) << endl;
    return 0;
}