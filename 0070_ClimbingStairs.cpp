class Solution {
    public:
        int climbStairs(int n) {
            if(n == 0){
                return 0;
            }
            if(n == 1){
                return 1;
            }
            if(n == 2){
                return 2;
            }
            int all = 0, one = 2, two = 1;
            for(int i = 2; i <n; i++){
                all = one+ two;
                two = one;
                one = all;
            }
            return all;
        }
    };