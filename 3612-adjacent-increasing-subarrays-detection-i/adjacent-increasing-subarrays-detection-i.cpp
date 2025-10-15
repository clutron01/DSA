class Solution {
public:
    bool isStrictlyIncreasing(vector<int>& nums, int start, int k) {
        for (int i = start + 1; i < start + k; i++) {
            if (nums[i] <= nums[i - 1])
                return false;
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for (int a = 0; a + 2 * k <= n; a++) {
            if (isStrictlyIncreasing(nums, a, k) &&
                isStrictlyIncreasing(nums, a + k, k))
                return true;
        }
        return false;
    }
};
