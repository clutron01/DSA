class Solution {
public:
    int totalMoney(int n) {
        long long totalAmount = 0;
        
        for(int i=0; i<n; i++){
            totalAmount += 1 + (i/7) + (i%7);
        }
        return totalAmount;
    }
};