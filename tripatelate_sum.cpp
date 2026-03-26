#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

vector<vector<int>> triplate_sum(vector<int>& arr, int size, int s)
{
    vector<vector<int>> ans;
    
    // Sort the array
    sort(arr.begin(), arr.end());
    
    // Find triplets
    for(int i = 0; i < size - 2; i++)
    {
        int left = i + 1;
        int right = size - 1;
        
        while(left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            
            if(sum == s)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[left]);
                temp.push_back(arr[right]);
                ans.push_back(temp);
                left++;
                right--;
            }
            else if(sum < s)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int s;
    cout << "Enter target sum: " << endl;
    cin >> s;
    
    vector<vector<int>> result = triplate_sum(arr, n, s);
    
    if(result.size() == 0)
    {
        cout << "No triplets found with sum " << s << endl;
    }
    else
    {
        cout << "Triplets with sum " << s << " are:" << endl;
        for(auto triplet : result)
        {
            cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
        }
    }
    
    return 0;
}