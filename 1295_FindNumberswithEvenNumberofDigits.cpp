class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int count = 0;
            for(int i = 0; i < nums.size(); i+=1){
                if(to_string(nums[i]).length()%2 == 0){
                    count+=1;
                }
            } 
            return count;
        }
    };