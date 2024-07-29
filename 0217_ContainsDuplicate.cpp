class Solution {
public:
    struct Counter{
        int val=0;
    };
    bool containsDuplicate(vector<int>& nums) {
        map<int, Counter> m;
        for(int i=0 ; i<nums.size(); i+=1){
            m[nums[i]].val += 1;
            if(m[nums[i]].val > 1){
                return true;
            }
        }
        return false;
    }
};