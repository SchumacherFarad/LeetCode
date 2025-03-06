class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> subsets = {{}};
            vector<int> subset;
    
            helper(subsets, subset, nums, 0);
    
            return subsets;
            
        }
        void helper(vector<vector<int>>& subsets, vector<int> subset, vector<int>& nums, int i){
            if(i < nums.size()){
                helper(subsets, subset, nums, i+1);
                subset.push_back(nums[i]);
                helper(subsets, subset, nums, i+1); 
                subsets.push_back(subset);
                subset.pop_back();
            }
        }
    };