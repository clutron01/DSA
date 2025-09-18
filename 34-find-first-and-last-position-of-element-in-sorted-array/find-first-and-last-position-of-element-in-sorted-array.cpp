class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = -1, end = -1;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                st = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                end = i;
                break;
            }
        }
        return {st,end};
    }
};