class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> digits(10,0);
        int temp = n;
        while(temp > 0){
            int rem = temp % 10;
            digits[rem]++;
            temp /= 10; 
        }

        int minFreq = INT_MAX;

        for(int i=0; i<10; i++){
           if(digits[i] > 0){
             minFreq = min(minFreq, digits[i]);
           }
        }

        for(int i=0; i<10; i++){
            if(minFreq == digits[i])
            return i;
        }
        return 0;
    }
};