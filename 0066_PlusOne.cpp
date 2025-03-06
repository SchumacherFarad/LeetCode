class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int adder = 1;
            vector<int> digitsresult;
            for(int i = digits.size()-1; i >= 0; i--){
                if(adder == 1){
                    digits[i] += 1;
                    adder = 0;
                    if(digits[i] == 10){
                        digits[i] = 0;
                        adder = 1;
                    }
                }
                if(i == 0 && adder == 1){
                    digitsresult.push_back(1);
                }
            }
            for(int i = 0; i < digits.size() ; i++){
                digitsresult.push_back(digits[i]);
            }
            return digitsresult;
        }
    };