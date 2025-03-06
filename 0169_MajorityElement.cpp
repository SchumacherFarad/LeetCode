class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int maxel = 0;
            int count = 0;
            for(int i = 0; i < nums.size(); i++){
                if(count == 0){
                    maxel = nums[i];
                }
                if(nums[i] == maxel){
                    count += 1;
                }
                else{
                    count -= 1;
                }
            }
            return maxel;
        }
    };