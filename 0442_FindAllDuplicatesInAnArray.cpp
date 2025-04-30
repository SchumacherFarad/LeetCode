class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            int n = nums.size();
            vector<int> counts(n+1,0);
            vector<int> results;
            for(uint i = 0; i < n; i+=1){
                counts[nums[i]] += 1;
                if(counts[nums[i]] == 2){
                    results.push_back(nums[i]);
                }
            }
            return results;
        }
    };