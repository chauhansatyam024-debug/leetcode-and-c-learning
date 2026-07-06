class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """ we will use hashmap """
        seen  ={}
        for i, num in enumerate(nums):
            temp = target - num
            if temp in seen :
                 return [seen[temp] , i]
            seen[num] = i