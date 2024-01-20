class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool isDiff = false;
        int j=1;
        int size = nums.size();
        for(int i = 0 ; i < size-1 ; i++){
            if(nums[i] != nums[i+1]){
                nums[j] = nums[i+1];
                j++;
            }
        }
        return j;
    }
};