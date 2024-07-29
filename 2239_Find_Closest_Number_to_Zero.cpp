class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int a = 100001;
        for(int i = 0; i<nums.size(); i+=1){
            if(abs(nums[i]) < abs(a)){
                a = nums[i];
            }
            if(abs(nums[i]) == abs(a)){
                a= max(nums[i], a);
            }
        }
        return a;
    }
};