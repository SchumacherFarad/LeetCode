class Solution {
public:
    bool isPalindrome(int x) {//x=678876
        long long int tempx = 0,realtemp = x;
        if(x<0){
            return false;
        }
        while(x != 0){
            int mod = x%10;
            tempx *=10;
            tempx += mod;
            x /= 10;
        }
        return realtemp == tempx;
    }
};