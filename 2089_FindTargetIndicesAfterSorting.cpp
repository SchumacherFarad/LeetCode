class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> results;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] == target){
                results.push_back(i);
            }
            if(nums[i] > target){
                break;
            }
        }
        return results;
    }
};