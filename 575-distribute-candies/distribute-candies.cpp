class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int maxAllowed = n / 2;

        sort(candyType.begin(), candyType.end());

        int uniqueCount = 1;
        for (int i = 1; i < n; i++) {
            if (candyType[i] != candyType[i - 1]) {
                uniqueCount++;
            }
        }

        return min(uniqueCount, maxAllowed);
    }
};
