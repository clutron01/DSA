class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        long long s = 0;
        for (int x : nums) {
            s += x;
        }
        long long l = 0;
        int ans = 0;
        for (int x : nums) {
            if (x > 0) {
                l += x;
            } else {
                if (l * 2 == s) {
                    ans += 2;
                } else if (std::llabs(l * 2 - s) == 1) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};
