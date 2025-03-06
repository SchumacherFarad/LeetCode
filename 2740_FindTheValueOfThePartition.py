class Solution:
    def findValueOfPartition(self, nums: List[int]) -> int:
        nums.sort()
        partition = 999999999
        for i in range(1,len(nums)):
            partition = min(partition, (nums[i]- nums[i-1]))
        return partition