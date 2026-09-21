class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        
        map={}
        for i in range(len(nums)):
            first=nums[i]
            second=target-first

            if(second in map):
                return [i,map[second]]
            else:
                map[nums[i]]=i