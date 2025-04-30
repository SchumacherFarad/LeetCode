class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            int max = 0, n = nums.size();
            long long total = 0;
            for (int i = 0; i < n; i++)
            {
                max = (nums[i]>max)?nums[i]:max;
            }
            vector<int> indexes;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == max)
                {
                    indexes.push_back(i);
                }
            }
            if (indexes.size() < k)
            {
                return 0;
            }
            int count = -1;
            for (int i = indexes[k-1]; i < n; i++)
            {
                if(nums[i] == max){
                    count++;
                }
                total += indexes[count]+1;
            }
            return total;
        }
    };