class Solution {
public:
    int specialArray(vector<int>& nums) {
        for (int i = 0; i <= nums.size(); i += 1){
            int x=0;
            for(int j=0; j< nums.size(); j+=1){
                if(nums[j] >= i){
                    x+=1;
                }
            }
            if(x==i){
                return x;
            }
        }
        return -1;
    }
};