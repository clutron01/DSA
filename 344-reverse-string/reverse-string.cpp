class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int temp = n;

        while(n){
        for(int i=0; i<n-1; i++){
            swap(s[i], s[i+1]);
        }
        n--;
        }
    }
};