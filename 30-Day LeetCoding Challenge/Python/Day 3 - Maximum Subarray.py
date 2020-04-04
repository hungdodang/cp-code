import sys
class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        global_max = - sys.maxsize - 1
        local_max = 0
        for num in nums:
            local_max = max(num, local_max + num)
            global_max = max(local_max, global_max)
        return global_max

nums = [-2,1,-3,4,-1,2,1,-5,4]
solution = Solution()
print(solution.maxSubArray(nums))

        