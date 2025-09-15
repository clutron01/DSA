class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxSoFar = nums[0];
        int minSoFar = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            int current = nums[i];

            if (current < 0) {
                swap(maxSoFar, minSoFar);
            }

            maxSoFar = max(current, maxSoFar * current);
            minSoFar = min(current, minSoFar * current);

            result = max(result, maxSoFar);
        }

        return result;
    }
};
