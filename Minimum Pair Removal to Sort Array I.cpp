class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while (!isSorted(nums)) {

            int idx = 0;
            int minSum = nums[0] + nums[1];

            // Find adjacent pair with minimum sum
            for (int i = 1; i < nums.size() - 1; i++) {
                if (nums[i] + nums[i + 1] < minSum) {
                    minSum = nums[i] + nums[i + 1];
                    idx = i;
                }
            }

            // Merge the pair
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);

            count++;
        }

        return count;
    }
};
