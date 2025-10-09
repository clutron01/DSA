class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector <int> digits(101,0);

        int num = 0;

        for(int i=0; i<nums.size(); i++){
             num = nums[i];
            digits[num]++;
        }
        int maxFreq = INT_MIN;
        for(int i=0; i<digits.size(); i++){
            maxFreq = max(maxFreq, digits[i]);
        }
        int count = 0;
        for(int i=0; i<digits.size(); i++){
            if(digits[i] == maxFreq) 
            count++;
        }
        return count * maxFreq;
    }
};