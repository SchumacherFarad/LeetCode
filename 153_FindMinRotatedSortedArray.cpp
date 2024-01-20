class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1){return nums[0];}
        int i = 0, size = nums.size()-1;
        while(nums[i] < nums[i+1] && i < size-1){i++;}
        return (nums[i] < nums[i+1])? nums[0]:nums[i+1];
    }
};