class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        output = 0
        for num in nums:
            output ^= num
        return output

input = [4, 1, 2, 1, 2]
solution = Solution()
print(solution.singleNumber(input))
        