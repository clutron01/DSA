class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size(),ans = 0;
        int maxDiff = INT_MIN;
        for(int i=0; i<n-1; i++){
            maxDiff = max(abs(nums[i] - nums[i+1]), maxDiff);
        }
        maxDiff =  max(abs(nums[0] - nums[n-1]), maxDiff);
        return maxDiff;
    }
};