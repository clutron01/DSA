class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        for(int place : order){
            for(int f : friends){
                if(f == place){
                    result.push_back(f);
                }
            }
        }
        return result;
    }
};