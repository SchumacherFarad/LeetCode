class Solution {
    public:
        int mySqrt(int x) {
            double n = 1;
            for(int i = 0 ; i < 50; i+=1){
                n = (n + x/n)/2;
            }
            return (int)n;
        }
    };