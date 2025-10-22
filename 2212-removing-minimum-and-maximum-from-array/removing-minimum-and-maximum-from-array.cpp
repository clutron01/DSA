class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        int minI = -1, maxI = -1;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] < mn) {
                mn = nums[i];
                minI = i;
            }
            if (nums[i] > mx) {
                mx = nums[i];
                maxI = i;
            }
        }

        int left = max(minI, maxI) + 1;          
        int right = n - min(minI, maxI);        
        int mix1 = (minI + 1) + (n - maxI);      
        int mix2 = (maxI + 1) + (n - minI);

        return min({left, right, mix1, mix2});
    }
};